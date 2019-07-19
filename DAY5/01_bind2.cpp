#include <iostream>
#include <functional>
using namespace std::placeholders;
using namespace std;

void foo(int a, int b, int c, int d)
{
	printf("%d, %d, %d, %d\n", a, b, c, d);
}
void goo(int a) {}

int main()
{
	// �Ϲ� �Լ� ������
	void(*f1)(int); 

	// C++11 ���� �����ϴ� �Լ� �������� �Ϲ�ȭ ����
	function<void(int)> f;
	
	f = &goo;
	f(10);

	// function �� bind�� ���� ����ϸ�
	// �پ��� �Լ��� ������ �ֽ��ϴ�.
	f = bind(&foo, 1,2,3, _1);
	f(10); // foo(1,2,3,10) 
}




