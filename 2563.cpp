//2563
#include <iostream>
using namespace std;

int main_2563() {
	int N;
	cin >> N;

	int arr[101][101];

	int x, y, res=0;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;

		for (int m = x; m < x + 10; m++) {
			for (int n = y; n < y + 10; n++) {
				if (arr[m][n] == 1) {
					continue;
				}
				arr[m][n] = 1;
				res++;
			}
		}

	}

	cout << res<<endl;

	return 0;
}