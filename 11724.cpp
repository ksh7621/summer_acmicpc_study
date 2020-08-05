//#include <iostream>
//#include <vector>
//using namespace std;
//
//void dfs(int now);
//
//vector<vector<int>>vt(1001);
//int visit[1001];
//
//int main() {
//	int N, M;
//	cin >> N >> M;
//
//	int u, v;
//
//	for (int i = 0; i < M; i++) {
//		cin >> u >> v;
//		vt[u].push_back(v);
//		vt[v].push_back(u);	
//	}
//
//	int cnt = 0;
//
//	for (int i = 1; i <=N; i++) {
//		if (!visit[i]) {
//			dfs(i);
//			cnt++;
//		}
//	}
//
//	cout << cnt << endl;
//	
//
//	return 0;
//}
//
//void dfs(int now) {
//	
//	visit[now] = true;
//
//	for (int i = 0; i < vt[now].size(); i++) {
//		if (!visit[vt[now][i]]) {
//			dfs(vt[now][i]);
//		}
//	}
//	
//}