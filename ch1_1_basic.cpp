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
	std::cout << "ù�� ° �� : ";
    std::cin >> val1;

	int val2;
	std::cout << "�ι� ° �� : ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "���: " << result << std::endl;


}

//�� �� ���� ������ ���� ����Ͻÿ�
// 3�� 7�̸� 4+5+6
void func1_3_sumBetween() {
	int a, b;
	int sum = 0;

	std::cout << "�� ���� ���ڸ� �Է�:  ";
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

	std::cout << "�� ������ ��: " << sum << std::endl;
}

//�迭�� ���ڿ� �Է¹ޱ�
//�̸��� ��ȭ��ȣ�� char �迭�� ���� �Է¹��� �� ����ϼ���
void func1_4_inputString() {

	char name[100];
	char phone[100];

	std:: cout << "�̸��� �Է��ϼ���: ";
	std::cin >> name;

	std::cout << "�� ��ȣ�� �Է��ϼ���";
	std::cin >> phone;

	std::cout << "*****�Է��� ������ ���*** \r\n";
	std::cout << name << std::endl;
	std::cout << phone << std::endl;
	   	 
}
