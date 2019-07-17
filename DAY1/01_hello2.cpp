#include "cppmaster.h"
#include <iostream>
using namespace std;

template<typename T> void foo(T a)
{
	LOG_FUNCTION_NAME();
}  
void goo(int a, int b)
{
	//cout << "goo" << endl;

	// __FUNCTION__ : �Լ��̸��� ���� ��ũ��
	//				  C++ǥ��
	// __FUNCSIG__ : �Լ��̸� + signature
	//					VC++ ����
	// __PRETTY_FUNCTION__ : g++ ����

	//cout << __FUNCTION__ << endl;
	//cout << __FUNCSIG__ << endl;

	LOG_FUNCTION_NAME(); // cppmaster.h �ִ�
						// ��ũ��
}

int main()
{
	goo(1, 2);

	foo(10);   
	foo(3.4);
}