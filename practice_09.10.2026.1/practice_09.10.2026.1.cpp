#include <iostream>

using namespace std;

int stepNum(int num, int step);


int main()
{
	int num = 0;
	int step = 0;
	cout << "Enter num: ";
	cin >> num;
	cout << "\nEnter step: ";
	cin >> step;
	cout << stepNum(num, step);

}

int stepNum(int num, int step) {
	if (step == 1) {
		return num;
	}
	else if (step == 0) {
		return 1;
	}
	else {
		return num * stepNum(num, step - 1);
	}
}


