
#include <iostream>
using namespace std;
// 114 page

// ġȯ ���д� ������ �ƴϴ�.
// Substitution Failure Is Not An Error
// 114 ���� �Ʒ���

template<typename T> 
typename T::type  foo(T a) { cout << "T" << endl; return 0; }
// int::type foo(int a)

void foo(...) { cout << "..." << endl; }


int main()
{
	foo(10);
}



