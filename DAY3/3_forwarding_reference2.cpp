#include <iostream>
using namespace std;

// �Լ��� lvalue�� rvalue�� ��ιް� �Ϸ���
// 1. call by value 
//    Ư¡ : ���纻�� �����ȴ�.
//    primitivate Ÿ���̸� ���� ���� �ɰ� ����.
//    ������ int �� �ƴ϶� user type �̸� ?
void foo(int arg) {}

// 2. const lvalue reference
//   Ư¡ : ���纻�� ����. ������ ������ �������
//		    �߰��ؼ� �ް� �ȴ�.
void foo(const int& arg) {}

// 3. lvalue ������ rvalue ���� �������� 2�� ����
// Ư¡ : ���纻�� ����. ������� �߰����� �ʴ´�.
void foo(int&) {}
void foo(int&&) {}

// 4. forwarding reference�� ����ϸ�
//    3���� �Լ��� �ڵ������Ҽ� �ִ�.
// n��  ���� T : int&   T&& : int&
// 10�� ���� T : int    T&& : int&&
template<typename T> void foo(T&& arg) {}

int main()
{
	int n = 0;

	foo(n);
	foo(10);
}

