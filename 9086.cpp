//9086
#include <iostream>
using namespace std;

int size(string A) {
	int count = 0;
	for (int i = 0; i < 1000; i++) {
		if (A[i] == '\0') break;
		else count++;	
	}
	return count;
}

int main_9086() {
	int T;
	cin >> T;
	string A;
	
	while (T > 0) {
		cin >> A;
		int end = size(A);
		cout << A[0] << A[end - 1]<<endl;
		T--;
	}

	return 0;
}