//11365
#include <iostream>
#include <string>
using namespace std;

int size(string A) {
	int count = 0;
	for (int i = 0; i < 500; i++) {
		if (A[i] == '\0') break;
		else count++;
	}
	return count;
}



int main_11365() {
	string A;

	while (1) {

		getline(cin, A);

		if (A == "END") break;

		else {
			for (int i = size(A) - 1; i >= 0; i--) {
				cout << A[i];
			}
		}
		cout << endl;
	}

	return 0;
}