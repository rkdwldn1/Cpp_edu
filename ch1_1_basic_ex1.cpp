#include <iostream>

void func1() {
	int val1;
	std::cout << "ù ��° ���� �Է�:";
	std::cin >> val1;

	int val2;
	std::cout << "�� �� ° ���� �Է� : ";
	std::cin >> val2;

	int result = val1 + val2;

	std::cout << "������\n" << std::endl;
	std::cout << val1 << '+' << val2 << '=' << result << std::endl;
}

void func2() {

	int val;

	std::cout << "�� ���� �������� ����ұ��?  ";
	std::cin >> val;

	for (int i = 1; i <=9; i++) {
		std::cout << val << "x" << i << "=" << val * i << std::endl;
	}
}
