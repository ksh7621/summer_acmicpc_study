//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//vector<pair<int, int>> vt[10001];
//int visited[10001];
//
//int diameter = 0; //지름 가장 긴 경로
//int far = 0; //끝 점 
//
//
//void dfs(int node, int cost) {
//	
//	visited[node] = true;
//
//	if (diameter < cost) {
//		diameter = cost; //지름값
//		far = node; //먼 곳	
//	}
//
//	for (int i = 0; i < vt[node].size(); i++)
//	{
//		if (!visited[vt[node][i].first])
//
//
//		dfs(vt[node][i].first, cost+vt[node][i].second); //cost 값 더하면서 가장 먼곳 찾기
//
//	}
//}
//
//int main() {
//	
//	int N;
//	cin >> N;
//
//	int parent;
//	int child;
//	int weight;
//	for (int i = 0; i < N-1; i++)
//	{
//		cin >> parent >> child >> weight;
//
//		vt[parent].push_back({ child, weight });
//		vt[child].push_back({ parent, weight });
//	}
//
//	
//	dfs(1, 0); //1에서 출발 가장 멀리 있는 정점
//
//	diameter = 0;
//	memset(visited, 0, sizeof(visited)); //리셋
//	
//
//	dfs(far, 0); //가장 먼 곳에서 가장 먼 곳 거리
//
//	cout << diameter << '\n';
//
//
//	return 0;
//}