//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//vector<vector<int>>vt(10001);
//int visited[10001];
//vector<int>vt1(100001);
//int N, M;
//int cnt = 0;
//
//void dfs(int node) 
//{
//	visited[node] = true;
//
//	for (int i = 0; i < vt[node].size(); i++)
//	{
//		if (!visited[vt[node][i]]) {
//			cnt++;
//			dfs(vt[node][i]);
//			
//		}
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//
//	cin.tie(0);
//
//	cin >> N >> M;
//
//	int u, v;
//
//	int res = 0;
//
//	while (M--) {
//		cin >> u >> v;
//
//		vt[v].push_back(u);	
//	}
//
//	for (int i = 1; i <= N; i++)
//	{
//		memset(visited, 0, sizeof(visited));
//		cnt = 0;
//
//		dfs(i);
//
//		if (res == cnt) {
//			vt1.push_back(i);
//		}
//
//		if (res < cnt) {
//			
//
//			vt1.clear();
//			vt1.push_back(i);		
//			res = cnt;
//		
//		}
//
//	}	
//
//	sort(vt1.begin(), vt1.end());
//
//	for (int i = 0; i < vt1.size(); i++)
//	{
//		cout << vt1[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}