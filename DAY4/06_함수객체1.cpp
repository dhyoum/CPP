#include <iostream>
using namespace std;

// 278 page
// �Լ� ��ü(function object, functor)
// �Լ� ó�� ��밡���� ��ü

// ���� - 279 page
// 1. ���¸� ������ �Լ�
// 2. ������ Ÿ�Լ�
// 3. �Ϲ� �Լ� ���� ������.(�ζ��� ġȯ��)


struct Plus
{
	int operator()(int a, int b) const
	{
		return a + b;
	}
};

int main()
{
	Plus p;
	int n = p(1, 2); // p.operator()(1,2)
	cout << n << endl;

	// a + b;  // a.operator+ (b)
	// a - b;  // a.operator-(b)
	// a();    // a.operator()()
	// a(1,2); // a.operator()(1,2)
}



