//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<vector<int>>vt(100001);
//int visited[100001];
//int parent[100001];
//
//void dfs(int node) {
//	visited[node] = true;
//
//	for (int i = 0; i < vt[node].size(); i++)
//	{
//		if (!visited[vt[node][i]]) {
//
//			parent[vt[node][i]] = node;
//			dfs(vt[node][i]);
//		}
//	}
//
//
//}
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	int N;
//	cin >> N;
//
//	int a, b;
//
//	for (int i = 0; i < N-1; i++) {
//		cin >> a >> b;
//		vt[b].push_back(a);
//		vt[a].push_back(b);
//	}
//
//	dfs(1);
//
//	for (int i = 2; i <= N; i++) {
//	
//		cout << parent[i] << "\n";
//	}
//
//	return 0;
//}





