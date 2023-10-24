#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

//매개변수로 전달받은 개수 만큼의 malloc으로 char 저장공간을 할당하고 포인터를 반환
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

//매개변수로 전달받은 개수 만큼 new char 저장공간을 할당하고 포인터를 반환
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

//기본형 변수 및 배열의 할당과 삭제
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

//구조체 할당과 삭제
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

//길이가 10인 배열을 new로 생성
//1부터 10까지 저장 후 출력
//함수 종료 전에 삭제
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
	cout <<"입력한 이름은 : "<< str << endl;

	delete[] str;

}


//길이를 매개변수로 받아서 해당 길이의 문자열을 저장할 수 있는 배열을 생성하고 
//그 주소값을 반환하는 함수를 만들고 이를 테스트하는 코드를 작성하라.
char* newMem(int len) {

	return  new char[len + 1];
}


//길이가 32인 char 배열을 new로 생성하고 
//사용자로부터 이름을 입력 받아 저장하고 출력, 함수 종료 전에 삭제
void func1_4_3() {

	int len;

	cout << "생성할 배열의 크기를 입력하세요" << endl;
	cin >> len;

	//char* ptr = newMem(len);
	char* ptr = new char[len + 1];
	cin >> ptr;
	cout << "입력한 문자열:" << ptr << endl;

	delete[]ptr;
}

//이름, 연락처, 나이를 저장하는 구조체를 만들고 new 로 할당 후 
//“홍길동“, 010-1234-5678, 26을 저장한 후 출력하고 삭제
void func1_4_4() {
	typedef struct {
		char name[32];
		char addr[64];
		int age;
	}ADDR;

	ADDR* ptr = new ADDR;
	strcpy(ptr->name, "홍길동");
	strcpy(ptr->addr, "010-1234-5678");
	ptr->age = 26;

	cout << ptr->name << ", " << ptr->addr << ", " << ptr->age << endl;

	delete ptr;
}

