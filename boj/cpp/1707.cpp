#include <iostream>
#include <vector>
using namespace std;

const int MAX = 20001;

int N, M; // N: 정점의 개수, M: 간선의 개수, V: 탐색을 시작할 정점
vector<int> adj[MAX]; // 인접 행렬 (0:연결x, 1:연결)
int visited[MAX]; // 방문한 노드 (0:방문x, 1:r그룹1, -1:그룹2)

void dfs(int node, int set) {
	visited[node] = set;

	for(int i = 0; i < adj[node].size(); i++) {
		int next = adj[node][i];
		if(visited[next] == 0) dfs(next, -set);
	}
}

bool bipartite() {
	for(int i = 0; i < N; i++)
		for(int j = 0; j < adj[i].size(); j++) {
			int next = adj[i][j];
			// 정점 i와 j가 연결되어 있고 둘의 그룹이 같을 경우 이분그래프가 아님
			if(visited[i] == visited[next]) return false;
		}

	return true;
}

int main(void) {
	int k;
	cin>>k;

	for(int i = 0; i < k; i++) {
		cin>>N>>M;

		int x, y; // 인접 행렬 좌표
		for(int j = 0; j < M; j++) {
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		} 

		for(int j = 0; j <= N; j++)
			if(visited[j] == 0) {
				visited[j] = 1;
				dfs(j, 1);
			}


		if(bipartite()) cout<<"YES\n";
		else cout<<"NO\n";

		// 인접 행렬, 방문 노드 초기화
		for(int j = 0; j <= N; j++) {
			adj[j].clear();
			visited[j] = 0;
		}
	}
}