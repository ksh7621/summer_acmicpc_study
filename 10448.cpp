//10448
#include <iostream>
using namespace std;

int trianglenum[45];

void init() {
	for (int i = 1; i < 45; i++) {
		trianglenum[i - 1] = (i * (i + 1)) / 2;
	
	}

}


bool triangle(int k) {
	for (int a = 0; a < 44; a++) {
		for (int b = 0; b < 44; b++) {
			for (int c = 0; c < 44; c++) {
				if (trianglenum[a] + trianglenum[b] + trianglenum[c] == k) {
					return true;
				}

			}
		}
	
	}
	return false;
}

int main_10448() {
	int t, k;
	cin >> t;

	init();

	for (int i = 0; i < t; i++) {
		cin >> k;

		if (triangle(k)) cout << "1"<<endl;
		else cout << "0"<<endl;	
	}

	
	return 0;
}