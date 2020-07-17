//2744
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

int main_2744() {
	string A;
	cin >> A;
	for (int i = 0; i < size(A); i++) {
		if (A[i] >= 65 && A[i] <= 90) {
			A[i] += 32;
		}
		else if (A[i] >= 97 && A[i] <= 122) {
			A[i] -= 32;
		}
	}
	for (int i = 0; i < size(A); i++) {
		cout << A[i];	
	}

	return 0;
}