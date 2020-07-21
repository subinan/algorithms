#include <iostream>
#include <vector>
using namespace std;

const int MAX = 20001;

int N, M; // N: 정점의 개수, M: 간선
vector<int> adj[MAX]; // 인접 행렬 (0:연결x, 1:연결)
int visited[MAX]; // 방문한 노드 (0:방문x, 1:방문)

int ans = 0;

void dfs(int node) {
	if(visited[node] == 1) ans++;

	visited[node] = 1;

	for(int i = 0; i < adj[node].size(); i++) {
		if(visited[next] == 0) dfs(next);
	}
}

int main(void) {
	int k;
	cin>>k;

	for(int i = 0; i < k; i++) {
		cin>>N;

		for(int j = 1; j <= N; j++) { // 인접행렬 (j, M) (M, j)
			cin>>M;
			adj[j].push_back(M);
			adj[M].push_back(j);
		} 

		for(int j = 1; j <= N; j++)
			if(visited[j] == 0) {
				visited[j] = 1;
				dfs(j);
			}


		cout<<ans<<'\n';

		// 인접 행렬, 방문 노드, ans 초기화
		for(int j = 0; j <= N; j++) {
			adj[j].clear();
			visited[j] = 0;
			ans = 0;
		}
	}
}