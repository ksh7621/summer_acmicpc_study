//2669
#include <iostream>
using namespace std;

int main_2669() {
	int arr[101][101] = {0,};
	int x, y, m, n, count = 0;

	for (int a = 0; a < 4; a++) {
		cin >> x >> y >> m >> n;

		
		for (int i = x; i < m; i++) {
			for (int j = y; j < n; j++) {
				if (arr[i][j]) {
					continue;
				}
				arr[i][j] = 1;
				count++;
			}
		}		
	}
	cout << count<<endl;

	return 0;
}
