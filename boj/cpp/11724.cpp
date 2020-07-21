#include <iostream>
#include <queue>
using namespace std;

const int MAX = 1001;

int N, M; // N: 정점의 개수, M: 간선의 개수
int adj[MAX][MAX] = { 0, }; // 인접 행렬 (0:연결x, 1:연결)
int visited[MAX]; // 방문한 노드 (0:방문x, 1:방문)

void dfs(int node) {
	for(int i = 1; i <= N; i++)
		if(adj[node][i] == 1 && visited[i] == 0) {
			visited[i] = 1;
			dfs(i);
		}
}

int main(void) {
	cin>>N>>M;

	int x, y; // 인접 행렬 좌표
	for(int i = 0; i < M; i++) {
		cin>>x>>y;
		adj[x][y] = 1;
		adj[y][x] = 1;
	}

	int ans = 0;
	for(int i = 1; i <= N; i++)
		if(visited[i] == 0) {
			dfs(i);
			ans++;
		}

	cout<<ans;

}