// 3_�Ϻ���������
#include <iostream>
using namespace std;

void foo(int  n) { n = 10; }
void goo(int& n) { n = 10; }

// �ذ�å
// 1. lvalue ����, rvalue ���� 2���� �����Ѵ�.
// 264 page
template<typename F> void chronometry(F f, int& arg)
{
	f(arg);
}
template<typename F> void chronometry(F f, int&& arg)
{
	f(arg);
}
int main()
{
	int x = 0;
	
	chronometry(foo, 10);
	chronometry(goo, x);

	cout << x << endl;
}


