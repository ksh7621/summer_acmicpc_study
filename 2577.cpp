//2577
#include <iostream>
using namespace std;


int main_2577() {
	int A, B, C;
	cin >> A;
	cin >> B;
	cin >> C;

	int res = A* B* C;
	
	int num[10] = { 0, };
	while (res != 0) {
		num[res % 10]++;
		res /= 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << num[i] << endl;
	}
	return 0;
}