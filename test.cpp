//1. 참조자를 이용해 인자로 전달한 int형 변수값을 1씩 증가하는 함수
//2. 참조자를 이용해 인자로 전달한 int 형 변수의 부호를 바꾸는 함수
//3. 다음의 num의 주소값을 저장한 포인터 변수와 이 포인터 변수를 참조하는 참조자를 선언하고
//  이 포인터변수와 참조자를 이용해 num에 저장된 값을 출력하라
//const int num = 12;
//4.길이를 매개변수로 받아서 해당 길이의 문자열을 저장할 수 있는 배열을 생성하고 
// 그 주소값을 반환하는 함수를 만들고 이를 테스트하는 코드를 작성하라.
//5. 다음과 같은 Point 구조체를 정의하고 이를 매개변수로 하는 pntAdder 함수를 정의하라.PntAdder함수는 매개변수로 전달 받은 두 개 점의 x좌표끼리 덧셈, y좌표 끼리 덧셈 연산으로 새로운 Point를 초기화해서 반환하는 함수이다.이 때 Point 구조체 변수는 new 연산자를 이용해야한다.
#include<iostream>
using namespace std;



//참조자를 이용해 인자로 전달한 int형 변수값을 1씩 증가하는 함수
void increVal(int& val) {
	val++;
}

//참조자를 이용해 인자로 전달한 int 형 변수의 부호를 바꾸는 함수
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

//두 개의 참조자를 인자로 전달받아 그 값을 바꿔주는 swap을 구현하세요
//이를 테스트하는 코드를 작성하세요
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


//다음의 num의 주소값을 저장한 포인터 변수와 
// 이 포인터 변수를 참조하는 참조자를 선언하고 
//이 포인터변수와 참조자를 이용해 num에 저장된 값을 출력하라
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

//4.길이를 정수형 매개변수로 받아서 
// 해당 길이의 문자열을 저장할 수 있는 배열을 생성하고 
//그 주소값을 반환하는 함수를 만들고 이를 테스트하는 코드를 작성하라.
char* makeCharArr(int len) {

	char* ptr = new char[len];

	return ptr;
}

void testmakeCharArr() {

	char* str = makeCharArr(10);

	cin >> str;

	cout << "입력하신 문자열 : " << str;

	delete[] str;

}

//5. 다음과 같은 Point 구조체를 정의한다.
//Point 구조체 참조자 두 개를 매개변수로 갖는 함수 PntAdder를 구현한다
// PntAdder는 매개변수로 전달된 두 개의 Point 참조자의 x좌표를 더한 x 값과 y좌표를 더한 y값을 갖는 Point 구조체를 새로 만들어 
// 새로 만든 참조자를 반환한다 
// 
//두 개 점의 덧셈연산을 pntAddr로 테스트 코드를 작성하라. 
//이 때 Point 구조체 변수는 new 연산자를 이용해야한다.
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
