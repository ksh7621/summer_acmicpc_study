//#include <iostream>
//#include <queue>
//using namespace std;
//
//queue<pair<int, int>>qu;
//int box[1001][1001];
//int dx[] = { -1,0,1,0 }; //시계방향
//int dy[] = { 0,1,0,-1 };
//int M, N;
//int res = 0;
//
//
//bool chk(int x, int y) {
//	if (x >= 0 && x <= N - 1 && y >= 0 && y <= M - 1) {	
//		return true;
//	}	
//	else return false;
//}
//
//
//
//void bfs() {
//
//	while (!qu.empty()) {
//
//		int now_x = qu.front().first;
//		int now_y = qu.front().second;
//		qu.pop();
//
//
//		for (int i = 0; i < 4; i++) { //4방향
//			int nx = now_x + dx[i];
//			int ny = now_y + dy[i];
//
//			if (!chk(nx, ny) || !box[nx][ny] == 0) continue;
//
//			if (chk(nx, ny) && box[nx][ny] == 0) {
//				box[nx][ny] = box[now_x][now_y] + 1;
//				qu.push({ nx, ny });
//			}
//		}
//	}	
//}
//
//int main() {
//	
//	cin >> M >> N;
//	
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			cin >> box[i][j];
//
//			if (box[i][j] == 1)	
//				qu.push({ i,j });
//			
//		}		
//	}
//
//	bfs();	
//
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (box[i][j] == 0) {
//				cout << "-1";
//				return 0;
//			}
//
//			if (res < box[i][j])
//				res = box[i][j];
//		}
//	}
//	cout << res - 1;
//	
//	return 0;
//}

