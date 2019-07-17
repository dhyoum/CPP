#include <iostream>
using namespace std;

// ������ �Լ� �����ε� - 239 page
void foo(int& a)       { cout << "int&" << endl; }       // 1
void foo(const int& a) { cout << "const int&" << endl; } // 2
void foo(int&& a)      { cout << "int&&" << endl; }      // 3

int main()
{
	int n = 10;

	foo(n);  // 1�� ȣ��, ������ 2��

	foo(10); // 3�� ȣ��, ������ 2��

	int& r1 = n;
	foo(r1); // 1��ȣ��, ������ 2�� ȣ��

	int&& r2 = 10; // 10�� rvalue������
					// r2�� �̸��ִ� ���� �̹Ƿ�
					// lvalue�Դϴ�.

			// "named rvalue reference is lvalue"

	foo(r2); // �ٽ�.. 1

	foo(static_cast<int&&>(r2)); // 3

}