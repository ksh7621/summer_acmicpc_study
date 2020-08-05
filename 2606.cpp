//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<vector<int>>vt(101);
//int visited[101];
//int cnt = 0;
//
//void dfs(int node) {
//
//	visited[node] = true;
//
//	for (int i = 0; i < vt[node].size(); i++)
//	{
//		if (!visited[vt[node][i]]) {
//
//			dfs(vt[node][i]);
//			cnt++;
//		}
//	}
//	
//
//}
//
//int main() {
//	int a, b;
//	cin >> a;
//	cin >> b;
//
//	int u, v;
//	for (int i = 0; i < b; i++)
//	{
//		cin >> u >> v;
//
//		vt[u].push_back(v);
//		vt[v].push_back(u);
//	}
//
//	dfs(1);
//	
//	cout << cnt << endl;
//
//	return 0;
//}