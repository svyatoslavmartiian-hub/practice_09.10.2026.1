#include <iostream>

using namespace std;

int stepNum(int num, int step) {
	if (step == 1) {
		return num;
	}
	else if (step == 0){
		return 1;
	}
	else {
		return num * stepNum(num, step -1);
	}
}

int main()
{
	cout << stepNum(5, 1);

}


