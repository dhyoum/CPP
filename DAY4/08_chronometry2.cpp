#include <iostream>
using namespace std;

class Test
{
public:
	void foo(int a) { cout << "foo" << endl; }
};

int main()
{
	void(Test::*f)(int) = &Test::foo;

	Test test;
	(test.*f)(0); // ��� �Լ� �����ͷ� ȣ��

	// �Ϲ� �Լ� �����Ͷ��
	f1(1, 2, 3);

	// �Ϲ��Լ� �����Ϳ� ��� �Լ� ������ ��� ������
	// ������� ȣ��ǰ� ����.
	invoke(f1, 1, 2, 3); // �Ϲ� �Լ� ������
	invoke(f, &test, 0); // ��� �Լ� ������

}

