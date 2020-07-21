#include <stdlib.h>
#include <iostream>

using namespace std;

typedef struct _node {
	int i;
	struct _node* next;
} Node;

typedef struct _CLL {
	Node* tail;
	Node* cur;
	Node* before;
	int numOfi;
} CList; // 원형 링크드 리스트

typedef CList List;

void ListInit(List* plist){
	plist->tail=NULL;
	plist->cur=NULL;
	plist->before=NULL;
	plist->numOfi=0;
}

void LInsert(List* plist, int i) {
	Node* newNode=(Node*)malloc(sizeof(Node));
	newNode->i=i;

	if(plist->tail==NULL) {
		plist->tail=newNode;
		newNode->next=newNode;
	} else {
		newNode->next=plist->tail->next;
		plist->tail->next=newNode;
		plist->tail=newNode;
	}
}

int LFirst(List* plist) {
	if(plist->tail==NULL)
		return false;

	plist->before=plist->tail;
	plist->cur=plist->tail->next;

	return true;
}

int LNext(List *plist) {
	if(plist->tail==NULL)
		return false;

	plist->before=plist->cur;
	plist->cur=plist->cur->next;

	return true;
}

int LRemove(List* plist) {
	Node* rpos=plist->cur;
	int ri=rpos->i;

	if(rpos==plist->tail) {
		if(plist->tail==plist->tail->next)
			plist->tail=NULL;
		else
			plist->tail=plist->before;
	}

	plist->before->next=plist->cur->next;
	plist->cur=plist->before;

	free(rpos);
	(plist->numOfi)--;

	return ri;
}

int main() {
	List list;
	ListInit(&list);

	int n, k;
	cin>>n>>k;

	int data=0;

	for(int i=1; i<=n; i++) LInsert(&list, i);
	
	LFirst(&list); // 처음으로 이동
	cout<<"<";
	for(int i=0; i<n; i++){
		for(int j=0; j<k; j++)
			LNext(&list);

		data=LRemove(&list)-1;
		if(data==0) data=n;

		if(i==n-1) cout<<data;
		else cout<<data<<", ";
	}
	cout<<">\n";
	
}