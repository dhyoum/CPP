#include <iostream>
using namespace std;

void foo(int    n) { cout << "int" << endl; }
void foo(double n) { cout << "double" << endl; }
void foo(bool   p) { cout << "bool" << endl; }
void foo(void*  p) { cout << "void*" << endl; }

int main()
{
	foo(0);     // int.    0�� ������ ���ͷ�
	foo(0.0);   // double. 0.0�� �Ǽ��� ���ͷ�
	foo(false); // bool.   false�� bool �� ���ͷ�

	foo(nullptr);// void*  nullptr�� ������ ���ͷ�

	// nullptr �� nullptr_t ��� Ÿ���Դϴ�.
	// nullptr_t�� ��� Ÿ���� �����ͷ� �Ͻ��� ����ȯ
	// �˴ϴ�.

	nullptr_t a = nullptr;

	void* p2 = a;
}






