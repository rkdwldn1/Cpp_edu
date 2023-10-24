#include <iostream>
using namespace std;

bool isPositive(int num) {

	if (num > 0) return true;
	else return false;

}

void func_testIsPositvie(){

	int val;

	cout << "정수 하나를 입력하세요 ";
	cin >> val;

	if (isPositive(val)) {
		cout << "positive" << endl;
	}
	else {
		cout << "negative" << endl;
	}
}