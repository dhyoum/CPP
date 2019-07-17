#include <iostream>
#include <type_traits>
using namespace std;

// using Ȱ�� - C++14/17
/*
template<typename T> 
using remove_pointer_t =
		typename remove_pointer<T>::type;
*/

template<typename T> void foo(T a)
{
	// ������ ���� ����
	bool b1 = is_pointer<T>::value;
	bool b2 = is_pointer_v<T>; // ���� ����

	// �����͸� ������ Ÿ�� ���
	//typename remove_pointer<T>::type n1;

	remove_pointer_t<T> n1; // ���� ������ ǥ���
				// 106 page �Ʒ� ��

	// cppreference.com 
}

int main()
{

	int n = 0;
	foo(&n);
}