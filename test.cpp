//1. �����ڸ� �̿��� ���ڷ� ������ int�� �������� 1�� �����ϴ� �Լ�
//2. �����ڸ� �̿��� ���ڷ� ������ int �� ������ ��ȣ�� �ٲٴ� �Լ�
//3. ������ num�� �ּҰ��� ������ ������ ������ �� ������ ������ �����ϴ� �����ڸ� �����ϰ�
//  �� �����ͺ����� �����ڸ� �̿��� num�� ����� ���� ����϶�
//const int num = 12;
//4.���̸� �Ű������� �޾Ƽ� �ش� ������ ���ڿ��� ������ �� �ִ� �迭�� �����ϰ� 
// �� �ּҰ��� ��ȯ�ϴ� �Լ��� ����� �̸� �׽�Ʈ�ϴ� �ڵ带 �ۼ��϶�.
//5. ������ ���� Point ����ü�� �����ϰ� �̸� �Ű������� �ϴ� pntAdder �Լ��� �����϶�.PntAdder�Լ��� �Ű������� ���� ���� �� �� ���� x��ǥ���� ����, y��ǥ ���� ���� �������� ���ο� Point�� �ʱ�ȭ�ؼ� ��ȯ�ϴ� �Լ��̴�.�� �� Point ����ü ������ new �����ڸ� �̿��ؾ��Ѵ�.
#include<iostream>
using namespace std;



//�����ڸ� �̿��� ���ڷ� ������ int�� �������� 1�� �����ϴ� �Լ�
void increVal(int& val) {
	val++;
}

//�����ڸ� �̿��� ���ڷ� ������ int �� ������ ��ȣ�� �ٲٴ� �Լ�
void convVal(int& val) {
	val = -val;
}

void test_incre_conv() {

	int num = 1;

	increVal(num);
	cout << num << endl;

	convVal(num);
	cout << num << endl;
}

//�� ���� �����ڸ� ���ڷ� ���޹޾� �� ���� �ٲ��ִ� swap�� �����ϼ���
//�̸� �׽�Ʈ�ϴ� �ڵ带 �ۼ��ϼ���
void swap(int& n1, int& n2) {
	int temp = n1;
	n1 = n2;
	n2 = temp;
}

void swap(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void swapTest() {
	int a = 10, b = 20;
	swap(a, b);
	cout << a << ", " << b << endl;

	a = 10; b = 20;
	swap(&a, &b);
	cout << a << ", " << b << endl;
}


//������ num�� �ּҰ��� ������ ������ ������ 
// �� ������ ������ �����ϴ� �����ڸ� �����ϰ� 
//�� �����ͺ����� �����ڸ� �̿��� num�� ����� ���� ����϶�
//const int num = 12;
void func1_9_2_3() {

	const int num = 12;
	const int* ptr = &num;
	const int*& ref = ptr;

	cout << *ptr << endl;
	cout << *ref << endl;

	cout << ptr << endl;
	cout << ref << endl;

}

//4.���̸� ������ �Ű������� �޾Ƽ� 
// �ش� ������ ���ڿ��� ������ �� �ִ� �迭�� �����ϰ� 
//�� �ּҰ��� ��ȯ�ϴ� �Լ��� ����� �̸� �׽�Ʈ�ϴ� �ڵ带 �ۼ��϶�.
char* makeCharArr(int len) {

	char* ptr = new char[len];

	return ptr;
}

void testmakeCharArr() {

	char* str = makeCharArr(10);

	cin >> str;

	cout << "�Է��Ͻ� ���ڿ� : " << str;

	delete[] str;

}

//5. ������ ���� Point ����ü�� �����Ѵ�.
//Point ����ü ������ �� ���� �Ű������� ���� �Լ� PntAdder�� �����Ѵ�
// PntAdder�� �Ű������� ���޵� �� ���� Point �������� x��ǥ�� ���� x ���� y��ǥ�� ���� y���� ���� Point ����ü�� ���� ����� 
// ���� ���� �����ڸ� ��ȯ�Ѵ� 
// 
//�� �� ���� ���������� pntAddr�� �׽�Ʈ �ڵ带 �ۼ��϶�. 
//�� �� Point ����ü ������ new �����ڸ� �̿��ؾ��Ѵ�.
typedef struct {
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point& p1, const Point& p2) {
	Point* ptr = new Point;

	ptr->xpos = p1.xpos + p2.xpos;
	ptr->ypos = p1.ypos + p2.ypos;
	return *ptr;
}

void func5_1() {
	Point p1 = { 10, 20 };
	Point p2 = { 5, 15 };

	Point& ref = PntAdder(p1, p2);
	delete& ref;
}

void func5_2() {
	Point* ptr1 = new Point;
	ptr1->xpos = 10;
	ptr1->ypos = 20;
	Point* ptr2 = new Point;
	ptr2->xpos = 5;
	ptr2->ypos = 15;

	Point& ref = PntAdder(*ptr1, *ptr2);
	cout << ref.xpos << ", " << ref.ypos << endl;

	delete ptr1;
	delete ptr2;
	delete& ref;

}
