// 3_�Ϻ���������
#include <iostream>
using namespace std;

void foo(int  n) { n = 10; }
void goo(int& n) { n = 10; }
void hoo(int&& n) {}

// �Ϻ��� ������ �Ϸ���
// 1. ���ڸ� "forwarding reference"�� �޴´�.
// 2. ���� ���ڸ� �ٸ����� �������� std::forward��
//    ��� �����Ѵ�.

template<typename F, typename T>
void chronometry(F f, T&& arg)
{
	// �Ʒ� ĳ������ lvalue �� lvalue�� 
	//              rvalue �� rvalue�� ĳ�����մϴ�

	// 10(rvalue) => arg(lvalue) => �ٽ� rvalue
	// x (lvalue) => arg(lvalue) => ��� lvalue
	//f(static_cast<T&&>(arg));

	f(std::forward<T>(arg)); // �� �Լ���
					// ��ó�� ĳ�����ϰ� �ֽ��ϴ�.
}


int main()
{
	int x = 0;

	chronometry(foo, 10);
	chronometry(goo, x);

	cout << x << endl;
}





