//10808
#include <iostream>
#include <cstring>
using namespace std;

int size(string S) {
	int count = 0;
	for (int i = 0; i < 100; i++) {	
		if (S[i] == '\0') break;
		else count++;
	}
	return count;

}

int main_10808() {
	int alphabet[26] = { 0, };
	string S;
	cout << "input string: ";
	cin >> S;
	
	for (int i = 0; i < size(S); i++) {
		for (int j = 'a'; j <= 'z'; j++) {
			if (S[i] == j) {
				alphabet[j - 97]++;
			}
		
		}
	}

	for (int i = 0; i <26; i++) {
		cout << alphabet[i] << " ";
	}

	return 0;
}