// 10_is_abstract1
#include <iostream>
using namespace std;

// 121 page Step4 ����
int  foo(int);// { return 0; }
char foo(double);// { return 0; }

int main()
{
	int n = 0;

	sizeof(n);		 // 4
	sizeof(foo);     // error. sizeof(�Լ��̸�)

	// unevaluated expression : �򰡵��� ���� ǥ����
	decltype(foo(3.4)) c;

	sizeof(foo(3.4));// sizeof(�Լ�ȣ���)
					//=> �Լ� ȣ�� ���(��ȯŸ��)ũ��
}


