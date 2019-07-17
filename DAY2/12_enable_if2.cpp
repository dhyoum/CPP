#include <iostream>
#include <type_traits>
using namespace std;

// 117page
// ��� ���� Ÿ�Կ� ���ؼ��� �ڵ带 �����ϴ� 
// ���ø��� ����� �ʹ�.
/*
template<typename T> void foo(T a)
{
	// ��� 1. static_assert
	// Ư¡ : ������ �������� ������ ������ ����
	static_assert(is_integral<T>::value,
				"error not integer type");
}
*/
// ��� 2. enable_if ��� - 117 ������ �ڵ�
// Ư¡ : ������ �������� ���ϸ� ������ �ƴ϶�!
//        �ĺ������� �����ٴ� �ǹ�.
//        ���� �̸��� �ٸ� �Լ��� �ִٸ� ��밡��
template<typename T> 
typename enable_if<is_integral<T>::value>::type
foo(T a)
{
	cout << "T" << endl;
}

void foo(double) { cout << "double" << endl; }

int main()
{
	foo(10);
	foo(3.4);
	foo(3.4f);
}
