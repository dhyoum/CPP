#include <iostream>
using namespace std;

// 236 page

// lvalue : =�� ���ʰ� �����ʿ� ��οü� �ִ�. 
//			�̸��� �ִ�. ���Ͻ��� �Ѿ �޸𸮿� ����.
//			������ �����ϴ� �Լ�
//			�ּҿ����ڷ� �ּҸ� ���Ҽ� �ִ�.

// rvalue : =�� �����ʿ��� �ü� �ִ�
//			�̸��� ����. ���ϽĿ����� ���.
//			���� �����ϴ� �Լ�
//			�ּҿ����ڷ� �ּҸ� ���Ҽ� ����.
//			�ӽð�ü, literal

int x = 10;
int  foo() { return x; }
int& goo() { return x; }

int main()
{
	int v1 = 10;
	int v2 = 20;

	v1 = 10; // v1 : lvalue, 10 : rvalue
	10 = v2; 
	v2 = v1;

	foo() = 20; // error
	goo() = 20; // ok

	cout << &v1 << endl;
	cout << &10 << endl; // error

	
	const int c = 10;
	c = 20;    // c�� lvalue ? rvalue
				// ���� �Ұ����� lvalue 

	// rvalue�� ����̴� ?  
	// �ƴϴ�.. ���� ���ʿ� �ü� �������̴�.
	Point(1, 2).x = 10; // error

	Point(1, 2).set(10, 20); // ok

}










