//#include <iostream>
//#include <queue>
//using namespace std;
//
//queue<pair<pair<int, int>,int>>qu;
//int box[101][101][101];
//int dx[] = { -1,0,1,0,0,0}; // 6¹æÇâ
//int dy[] = { 0,1,0,-1,0,0};
//int dh[] = {0,0,0,0,1,-1};
//int M, N,H;
//int res = 0;
//
//
//bool chk(int x, int y ,int h) {
//	if (x >= 0 && x <= N - 1 && y >= 0 && y <= M - 1 && h >= 0 && h <= H-1 ) {	
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
//		int now_x = qu.front().first.first;
//		int now_y = qu.front().first.second;
//		int now_h = qu.front().second;
//		qu.pop();
//
//
//		for (int i = 0; i < 6; i++) { 
//			int nx = now_x + dx[i];
//			int ny = now_y + dy[i];
//			int nh = now_h + dh[i];
//
//			if (!chk(nx, ny, nh) || !box[nx][ny][nh] == 0) continue;
//
//			if (chk(nx, ny, nh) && box[nx][ny][nh] == 0) {
//				box[nx][ny][nh] = box[now_x][now_y][now_h] + 1;
//				qu.push({ { nx, ny },nh });
//			}
//		}
//	}	
//}
//
//int main() {
//	
//	cin >> M >> N >> H;
//
//	for (int k = 0; k < H; k++)
//	{
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < M; j++)
//			{
//				cin >> box[i][j][k];
//
//				if (box[i][j][k] == 1)
//					qu.push({ { i,j },k});
//			}
//
//		}
//	}
//	
//
//	bfs();	
//
//	for (int k = 0; k < H; k++)
//	{
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < M; j++)
//			{
//				if (box[i][j][k] == 0) {
//					cout << "-1";
//					return 0;
//				}
//
//				if (res < box[i][j][k])
//					res = box[i][j][k];
//			}
//		}
//	}
//	cout << res - 1;
//	
//	return 0;
//}

