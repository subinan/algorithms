# include <stdio.h>
# define MAX 1000000

/* 2개의 인접한 배열 list[left...mid]와 list[mid+1...right]의 합병 과정 */
/* (실제로 숫자들이 정렬되는 과정) */
void merge(int arr[], int left, int mid, int right){
  int i = left;
  int j = mid+1;
  
  int k = left;
  int sorted[MAX];
 
  /* 분할 정렬된 list의 합병 */
  while(i<=mid && j<=right){
    if(arr[i]<=arr[j])
      sorted[k++] = arr[i++];
    else
      sorted[k++] = arr[j++];
  }

  // 남아 있는 값들을 일괄 복사
  if(i>mid){
    for(int l=j; l<=right; l++)
      sorted[k++] = arr[l];
  }
  // 남아 있는 값들을 일괄 복사
  else{
    for(int l=i; l<=mid; l++)
      sorted[k++] = arr[l];
  }

  // 배열 sorted[](임시 배열)의 리스트를 배열 list[]로 재복사
  for(int l=left; l<=right; l++){
    arr[l] = sorted[l];
  }
}

// 합병 정렬
void merge_sort(int arr[], int left, int right){
  int mid;

  if(left<right){
    mid = (left+right)/2; // 중간 위치를 계산하여 리스트를 균등 분할 -분할(Divide)
    merge_sort(arr, left, mid); // 앞쪽 부분 리스트 정렬 -정복(Conquer)
    merge_sort(arr, mid+1, right); // 뒤쪽 부분 리스트 정렬 -정복(Conquer)
    merge(arr, left, mid, right); // 정렬된 2개의 부분 배열을 합병하는 과정 -결합(Combine)
  }
}

int main(void){
  int n;
  scanf("%d", &n);

  int arr[MAX];
  for(int i=0; i<n; i++)
	  scanf("%d", arr+i);

  // 합병 정렬 수행(left: 배열의 시작, right: 배열의 끝)
  merge_sort(arr, 0, n-1);

  // 정렬 결과 출력
  for(int i=0; i<n; i++){
    printf("%d\n", arr[i]);
  }
}