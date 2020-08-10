//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//vector<vector<int>>vt(101);
//queue<int> qu;
//int visited[101];
//int n, m;
//int cnt = 0;
//
//
//void bfs(int start) {
//
//	visited[start] = true;	
//	qu.push(start);
//
//	while (!qu.empty()) {
//		int node = qu.front();
//		qu.pop();
//
//		for (int i = 0; i < vt[node].size(); i++)
//		{
//			if (!visited[vt[node][i]]) {	
//				qu.push(vt[node][i]);
//				visited[vt[node][i]] = true;
//				cnt++;
//				
//			}
//
//		}
//	
//	}
//}
//int main() {
//	
//	cin >> n >> m;
//
//	for (int i = 0; i < m; i++) {
//		int a, b;
//		cin >> a >> b;
//
//		vt[a].push_back(b);
//		vt[b].push_back(a);	
//	}
//
//	bfs(1);
//	
//	cout << cnt << '\n';
//
//	return 0;
//}