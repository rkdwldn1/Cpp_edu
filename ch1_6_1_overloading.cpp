#include<iostream>

void MyFunc() {
	std::cout << "MyFunc() called" << std::endl;
}

void MyFunc(char a) {
	std::cout << "MyFunc(char a) called" << std::endl;
}

void MyFunc(int a) {
	std::cout << "MyFunc(int a) called" << std::endl;
}

void MyFunc(int a, int b) {
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}
void MyFunc(double a, double b) {
	std::cout << "MyFunc(double a, double b) called" << std::endl;
}

void test_MyFunc() {
	MyFunc();
	MyFunc('A');
	MyFunc(3);
	MyFunc(3, 4);
	MyFunc(3.0, 4.0);
}

int getSum(int a, int b) {

	int result = a + b;

	std::cout << "정수 연산: " << a << "+" << b << " = " << result << std::endl;

	return a + b;
}

double  getSum(double a, double b) {

	double result = a + b;
	
	std::cout << "실수 연산: " << a << "+" << b << " = " << result << std::endl;

	return a + b;
}

void getSum_test() {

	int a = 3, b = 4;
	double c = 3.1, d = 4.1;

	 getSum(a, b) ;
	 getSum(c, d);

}

void swap(char *ptr1, char *ptr2) {
	char temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void swap(int *ptr1, int *ptr2) {
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void swap(double *ptr1, double *ptr2) {
	double temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void test_swap() {

	char a = 'a', b = 'b';
	swap(&a, &b);
	std::cout << a << ", " << b << std::endl;

	int n1 = 10, n2 = 20;
	swap(&n1, &n2);
	std::cout << n1 << ", " << n2 << std::endl;

	double db1 = 1.1, db2 = 2.2;
	swap(&db1, &db2);
	std::cout << db1 << ", " << db2 << std::endl;


}
