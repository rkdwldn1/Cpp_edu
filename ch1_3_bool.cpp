#include <iostream>
using namespace std;

bool isPositive(int num) {

	if (num > 0) return true;
	else return false;

}

void func_testIsPositvie(){

	int val;

	cout << "���� �ϳ��� �Է��ϼ��� ";
	cin >> val;

	if (isPositive(val)) {
		cout << "positive" << endl;
	}
	else {
		cout << "negative" << endl;
	}
}