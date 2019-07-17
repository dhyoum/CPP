#include "cppmaster.h"
#include <iostream>
using namespace std;

template<typename T> void foo(T a)
{
	LOG_FUNCTION_NAME();
//	LOG_TYPE_NAME(T);
//	LOG_TYPE_NAME(decltype(a));
}
template<typename T> void goo(T& a)
{
	LOG_FUNCTION_NAME();
//	LOG_TYPE_NAME(T);
//	LOG_TYPE_NAME(decltype(a));
}
int main()
{
	int n = 0;
	int& r = n;
	const int c = 10;

	// volatile : �����Ϸ����� �ش� ������
	//     ����ȭ ���� ����� �ǹ�.
	// int�� volatile int�� �ٸ� Ÿ���Դϴ�.
	// �������� ���� ���
	// ���� c++ : volatile�� ������� ����
	volatile int c2 = 0; 
	foo(n);
	foo(r);
	foo(c);

	goo(n);
	goo(r);
	goo(c);


//	int x[3] = { 1,2,3 };
//	foo(x);
//	goo(x);
}
