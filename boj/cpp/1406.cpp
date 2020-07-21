#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
	list<char> L;

	string s; // 입력받은 문자열
	int m; // 명령어의 수
	
	cin>>s>>m;

	for(char c : s) L.push_back(c);

	auto cur = L.end();
	string command;
	
	cin.ignore();
	for(int i=0; i<m; i++) {
		getline(cin, command);

		switch(command[0]){
		case 'L':
			if(cur != L.begin()) cur--;
			break;
		case 'D':
			if(cur != L.end()) cur++;
			break;
		case 'B':
			if(cur != L.begin()) {
				cur--;
				cur = L.erase(cur);
			}
			break;
		case 'P':
			L.insert(cur, command[2]);
		}
	}

	for(char c : L) cout << c; 
}