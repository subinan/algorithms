#include <iostream>
#include <algorithm>

using namespace std;

struct cood {
    int x, y;
};

cood arr[100001] = {0, };

bool compare (cood a, cood b) {
    return a.y != b.y ? a.y < b.y : a.x < b.x;
}

int main()
{
    int n;
    cin >> n;
    
    for(int i = 0; i < n; ++i) scanf("%d %d", &arr[i].x, &arr[i].y);
    
    sort(arr,  arr + n, compare);
    
    for(int i = 0; i < n; ++i) printf("%d %d\n", arr[i].x, arr[i].y);\
    
    return 0;
}