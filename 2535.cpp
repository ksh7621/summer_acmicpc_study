//2535
#include <iostream>
using namespace std;

class Asia {
public:
	int nation;
	int num;
	int grade;
};


int main_2535() {
	int N;
	int nation, num, grade;
	cin >> N;

	class Asia arr[100];

	//ют╥б
	for (int i = 1; i <= N; i++) {
		cin >> nation >> num >> grade;
		arr[i].nation = nation;
		arr[i].num = num;
		arr[i].grade = grade;
	}

	//first
	int firstnation = 0;
	int firstnum = 0;
	int firstgrade = 0;

	for (int i = 1; i <= N; i++) {
			
		if (arr[i].grade > firstgrade) {
			firstnation = arr[i].nation;
			firstnum = arr[i].num;
			firstgrade = arr[i].grade;
		}
	}

	cout << firstnation << " " << firstnum << endl;

	//second
	int secondnation = 0;
	int secondnum = 0;
	int secondgrade = 0;

	for (int i = 1; i <= N; i++) {
		if (arr[i].grade < firstgrade && arr[i].grade > secondgrade  ) {
			secondnation = arr[i].nation;
			secondnum = arr[i].num;
			secondgrade = arr[i].grade;
		}
	}
	cout << secondnation <<" " << secondnum << endl;
	
	//third
	int thirdnation = 0;
	int thirdnum = 0;
	int thirdgrade = 0;

	for (int i = 1; i <= N; i++) {
		if (firstnation != secondnation) {
			if (arr[i].grade < firstgrade && arr[i].grade < secondgrade && arr[i].grade > thirdgrade) {
				thirdnation = arr[i].nation;
				thirdnum = arr[i].num;
				thirdgrade = arr[i].grade;
			}
		}
		else if (firstnation = secondnation) {
			if (arr[i].grade < firstgrade && arr[i].grade < secondgrade && arr[i].grade > thirdgrade && arr[i].nation != firstnation ) {
				thirdnation = arr[i].nation;
				thirdnum = arr[i].num;
				thirdgrade = arr[i].grade;
			}
		}
	}
	cout << thirdnation << " " << thirdnum << endl;

	return 0;
}