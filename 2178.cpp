//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <queue>
//#include <stdio.h>
//using namespace std;
//
//int map[110][110];
//int visited[110][110];
//int N, M;
//int dx[] = { 0,0,1,-1 };
//int dy[] = { 1,-1,0,0 };
//
//
//bool chk(int x, int y) {
//	if (x >= 0 && x <= N && y <= M && y >= 0) return true;
//	else return false;
//
//}
//
//int bfs(int x, int y) {
//	queue<pair<pair<int, int>, int>>qu;
//
//	qu.push({ { x,y },0 });
//	visited[x][y] = true;
//	int cnt = 0;
//
//	while (!qu.empty()) {
//		int now_x = qu.front().first.first;
//		int now_y = qu.front().first.second;
//		int now_cnt = qu.front().second; //가는 횟수
//		qu.pop();
//
//		if (now_x == N && now_y == M) return now_cnt;
//
//		for (int i = 0; i < 4; i++) { //4방향
//			int nx = now_x + dx[i];
//			int ny = now_y + dy[i];
//
//			if (!chk(nx, ny)) continue; // 미로 내에 없음
//
//			if (map[nx][ny] == 1 && !visited[nx][ny]) { //1이고 방문 안함
//				qu.push({ {nx, ny}, now_cnt + 1 });
//				visited[nx][ny]=true;
//			}
//		}
//	}
//}
//
// 
//int main() {
//	scanf("%d%d", &N, &M);
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			scanf("%1d", &map[i][j]);	
//		}	
//	}
//	
//
//	int res = bfs(1,1);
//
//	printf("%d", res+1);
//	return 0;
//}