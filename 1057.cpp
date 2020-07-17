//1057
#include <iostream>
using namespace std;

int main_1057() {
	int N, kim, lim;
	cin >> N >> kim >> lim;

	int res = 0;
	if (N < kim || N < lim) {
		res = -1;
	}

	else {
		while (kim != lim) {
			kim = (kim + 1) / 2;
			lim = (lim + 1) / 2;
			res++;
		}
	}
	cout << res << endl;
	return 0;
}