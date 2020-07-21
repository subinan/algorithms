#include <stdio.h>
 
int main(){
	int count;
	scanf("%d", &count);
	
	int n;
	int matrix[2][100001];
	int d[2][100001];
 
	while(count-- > 0) {
		scanf("%d", &n);
 
		for(int i = 0; i < 2; i++)
			for(int j = 1; j <= n; j++)
				scanf("%d", &matrix[i][j]);
 
		d[0][0] = d[1][0] = 0;
		d[0][1] = matrix[0][1];
		d[1][1] = matrix[1][1];
 
		for(int i = 2; i <= n; i++) {
			d[0][i] = matrix[0][i] + (d[1][i - 1] > d[1][i - 2] ? d[1][i - 1] : d[1][i - 2]);
			d[1][i] = matrix[1][i] + (d[0][i - 1] > d[0][i - 2] ? d[0][i - 1] : d[0][i - 2]);
		}
 
		printf("%d\n",  d[0][n] > d[1][n] ? d[0][n] : d[1][n]);
	}
}