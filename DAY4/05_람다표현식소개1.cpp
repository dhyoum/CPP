#include <iostream>
using namespace std;

// 276 page ���� ����
void foo( int(*f)(int, int) )
{
	f(1, 2);
}
int add(int a, int b) { return a + b; }

int main()
{
	foo(add);

	// [] : lambda introducer
	// ����ǥ������ ���۵��� �˸��� ��ȣ
	// ����ǥ���� : �͸��� �Լ��� ����� ǥ���
	foo([](int a, int b) { return a + b; });


	add(1, 2);

	int n = [](int a, int b) { return a + b; }(1, 2);

	// �Լ� �̸��Ǵ� �ּҰ� �ʿ��� ����
	// �Լ� ���� ��ü�� ǥ���ϴ� ����.
}
