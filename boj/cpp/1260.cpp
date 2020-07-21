#include <iostream>
#include <queue>
using namespace std;

const int MAX = 1001;

int N, M, V; // N: 정점의 개수, M: 간선의 개수, V: 탐색을 시작할 정점
int adj[MAX][MAX] = { 0, }; // 인접 행렬 (0:연결x, 1:연결)
int visited[MAX]; // 방문한 노드 (0:방문x, 1:방문)

void dfs(int node) {
	cout<<node<<' ';

	for(int i = 1; i <= N; i++)
		if(adj[node][i] == 1 && visited[i] == 0) {
			visited[i] = 1;
			dfs(i);
		}
}

void bfs(int node) {
	queue<int> q;
	q.push(node);
	visited[node] = 1;

	while(!q.empty()) {
		int v = q.front();
		cout<<v<<' ';
		q.pop();

		for(int i = 1; i <= N; i++)
			if(adj[v][i] == 1 && visited[i] == 0) {
				visited[i] = 1;
				q.push(i);
			}
	}
}

int main(void) {
	cin>>N>>M>>V;

	int x, y; // 인접 행렬 좌표
	for(int i = 0; i < M; i++) {
		cin>>x>>y;
		adj[x][y] = 1;
		adj[y][x] = 1;
	}

	visited[V] = 1;
	dfs(V);
	cout<<'\n';


	// 방문 노드 초기화
	for(int i = 0; i <= N; i++) visited[i] = 0;
	visited[V] = 1;
	bfs(V);
}