// 3_�Ϻ���������
#include <iostream>
using namespace std;

void foo(int  n) { n = 10; }
void goo(int& n) { n = 10; }

void hoo(int&& n) {}



template<typename F> void chronometry(F f, int& arg)
{
	//f(arg) ;
	f(static_cast<int&>(arg)); // ĳ������ �ʿ������
						// �ص� ���������� �ʴ´�
}

// main		     chronometry		hoo(int&)
// 10(rvalue) ========================> ok
// 10(rvalue) ==> int&& arg(lvalue) ==> error
//					ĳ���� �ʿ�!
template<typename F> void chronometry(F f, 
								int&& arg)
{
	// int&& arg = 10
	// 10 �� rvalue ������ arg�� lvalue �Դϴ�.
	//f(arg); // hoo(int&)�� ã�� �ִ�

	f(static_cast<int&&>(arg)); // ok
}

int main()
{
	int x = 0;

	hoo(10); // ok

	chronometry(hoo, 10);//??

	cout << x << endl;
}





