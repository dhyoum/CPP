#include <iostream>
using namespace std;

template<typename T> struct xremove_reference
{
	using type = T;
};
template<typename T> struct xremove_reference<T&>
{
	using type = T;
};

template<typename T> void foo(T a)
{
	// T�� ���������� ����Ϸ��� typename �ʿ�
	typename xremove_reference<T>::type n;
}
int main()
{
	// xremove_reference ����� ������.
	xremove_reference<int&>::type n1; // int

	// ������ ���ڵ尡 ���������� ������ �˴ϴ�
}