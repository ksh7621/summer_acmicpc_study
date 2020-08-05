//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//#include <cstring>
//using namespace std;
//
//int arr[101][101];
//int visited[101];
//int N;
//
//void dfs(int here) {
//	for (int i = 1; i <= N; i++) {
//			if (arr[here][i]==1 && !visited[i]) {
//
//				visited[i] = true;
//
//				dfs(i);
//			}
//	}
//}
//
//int main() {
//	
//	cin >> N;	
//
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= N; j++) {
//
//			cin >> arr[i][j];
//
//		}
//
//	}
//	
//	for (int i = 1; i <= N; i++)
//	{
//		memset(visited, 0, sizeof(visited));
//
//		dfs(i);
//
//		for (int j = 1; j <= N; j++) {
//			if (visited[j] == true) {
//				arr[i][j] = 1;
//			}
//		}		
//	}
//
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= N; j++) {
//
//			cout << arr[i][j] << " ";
//
//		}
//		cout << endl;
//	}
//	return 0;
//}



