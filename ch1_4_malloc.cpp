#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

//�Ű������� ���޹��� ���� ��ŭ�� malloc���� char ��������� �Ҵ��ϰ� �����͸� ��ȯ
char * makeStrAdr(int len) {

	char * ptr = (char*)malloc(sizeof(char)*len);
	return ptr;
}

void func_test_malloc() {
	char *pstr = makeStrAdr(20);
	strcpy(pstr, "hello cpp");

	cout << pstr << endl;

	free(pstr);
}

//�Ű������� ���޹��� ���� ��ŭ new char ��������� �Ҵ��ϰ� �����͸� ��ȯ
char * makeStrNew(int len) {

	char *pstr = new char[len];

	return pstr;
}

int func_test_New() {

	char* pstr = makeStrNew(20);
	strcpy(pstr, "hello cpp");
	cout << pstr << endl;

	delete[]pstr;


	return 0;
}

//�⺻�� ���� �� �迭�� �Ҵ�� ����
void test_new_delete() {

	int * ptr1 = new int;
	double *ptr2 = new double;

	int *ptr3 = new int[10];
	double *ptr4 = new double[10];

	delete ptr1;
	delete ptr2;

	delete[] ptr3;
	delete[] ptr4;
}

//����ü �Ҵ�� ����
typedef struct {
	int xPos;
	int yPos;
}Point;

void test_new_struct() {

	Point *ptr = new Point;
	ptr->xPos = 10;
	ptr->yPos = 20;

	delete ptr;

}

//���̰� 10�� �迭�� new�� ����
//1���� 10���� ���� �� ���
//�Լ� ���� ���� ����
void func1_4_1() {
	int* ptr = new int[10];

	for (int i = 0; i < 10; i++) {
		//*(ptr + i) = i + 1;
		ptr[i] = i + 1;
		cout << *(ptr + i) << ", ";
	}

	delete[] ptr;

}

void func1_4_2() {
	
	char* str = new char[32];

	cin >> str;
	cout <<"�Է��� �̸��� : "<< str << endl;

	delete[] str;

}


//���̸� �Ű������� �޾Ƽ� �ش� ������ ���ڿ��� ������ �� �ִ� �迭�� �����ϰ� 
//�� �ּҰ��� ��ȯ�ϴ� �Լ��� ����� �̸� �׽�Ʈ�ϴ� �ڵ带 �ۼ��϶�.
char* newMem(int len) {

	return  new char[len + 1];
}


//���̰� 32�� char �迭�� new�� �����ϰ� 
//����ڷκ��� �̸��� �Է� �޾� �����ϰ� ���, �Լ� ���� ���� ����
void func1_4_3() {

	int len;

	cout << "������ �迭�� ũ�⸦ �Է��ϼ���" << endl;
	cin >> len;

	//char* ptr = newMem(len);
	char* ptr = new char[len + 1];
	cin >> ptr;
	cout << "�Է��� ���ڿ�:" << ptr << endl;

	delete[]ptr;
}

//�̸�, ����ó, ���̸� �����ϴ� ����ü�� ����� new �� �Ҵ� �� 
//��ȫ�浿��, 010-1234-5678, 26�� ������ �� ����ϰ� ����
void func1_4_4() {
	typedef struct {
		char name[32];
		char addr[64];
		int age;
	}ADDR;

	ADDR* ptr = new ADDR;
	strcpy(ptr->name, "ȫ�浿");
	strcpy(ptr->addr, "010-1234-5678");
	ptr->age = 26;

	cout << ptr->name << ", " << ptr->addr << ", " << ptr->age << endl;

	delete ptr;
}

