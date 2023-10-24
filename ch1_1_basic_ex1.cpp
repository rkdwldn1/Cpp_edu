#include <iostream>

void func1() {
	int val1;
	std::cout << "첫 번째 숫자 입력:";
	std::cin >> val1;

	int val2;
	std::cout << "두 번 째 숫자 입력 : ";
	std::cin >> val2;

	int result = val1 + val2;

	std::cout << "연산결과\n" << std::endl;
	std::cout << val1 << '+' << val2 << '=' << result << std::endl;
}

void func2() {

	int val;

	std::cout << "몇 단의 구구단을 출력할까요?  ";
	std::cin >> val;

	for (int i = 1; i <=9; i++) {
		std::cout << val << "x" << i << "=" << val * i << std::endl;
	}
}
