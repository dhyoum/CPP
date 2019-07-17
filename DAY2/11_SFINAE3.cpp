#include <iostream>
using namespace std;

// SFINAE �� Ȱ���ϴ� 3���� ���

/*
template<typename T> void foo(T a)
{
	typename T::type n; // SFINAE�� ����ɱ�� ?
					    // �ƴϸ� ���� �ϱ�� ?
					// ����
}
*/
// SFINAE ����� 3���� ��ġ���� ��밡���մϴ�.
// 1. ���� Ÿ������..!!
template<typename T>
typename T::type foo(T a) { cout << "T" << endl; return 0; }

// 2. �Լ����ڿ� ���
template<typename T>
void foo(T a, typename T::type n = 0) { }


// 3. ���ø� ���ڿ� ���
template<typename T, 
		 typename T2 = typename T::type>
void foo(T a) {}


void foo(...) { cout << "..." << endl; }

int main()
{
	foo(10);
}




