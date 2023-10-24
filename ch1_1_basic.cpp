#include <iostream>

void func1_1_output() {
	int num = 20;

	std::cout << "hello wolrd" << std::endl;
	std::cout << "hello" << " world" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
}

void func1_2_input() {

	int val1;
	std::cout << "첫번 째 수 : ";
    std::cin >> val1;

	int val2;
	std::cout << "두번 째 수 : ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "결과: " << result << std::endl;


}

//두 개 정수 사이의 합을 출력하시요
// 3과 7이면 4+5+6
void func1_3_sumBetween() {
	int a, b;
	int sum = 0;

	std::cout << "두 개의 숫자를 입력:  ";
	std::cin >> a >> b;

	if (a < b) {
		for (int i = a + 1; i < b; i++) {
			sum += i;
		}
	}
	else {
		for (int i = b + 1; i < a; i++) {
			sum += i;
		}
	}

	std::cout << "두 정수의 합: " << sum << std::endl;
}

//배열에 문자열 입력받기
//이름과 전화번호를 char 배열에 각각 입력받은 후 출력하세요
void func1_4_inputString() {

	char name[100];
	char phone[100];

	std:: cout << "이름을 입력하세요: ";
	std::cin >> name;

	std::cout << "폰 번호를 입력하세요";
	std::cin >> phone;

	std::cout << "*****입력한 정보의 출력*** \r\n";
	std::cout << name << std::endl;
	std::cout << phone << std::endl;
	   	 
}
