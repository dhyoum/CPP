#include <iostream>
using namespace std;

/*
// C++11 ǥ��
// int2type�� ���� ���� ���� ����
template<typename T, T N> struct integral_constant
{
	static constexpr T value = N;
};

integral_constant<short, 0> s0;
integral_constant<short, 1> s1;
integral_constant<int, 0>   n0;

// �Ʒ� �ڵ尡 �߿��մϴ�.
// true / false : �������� ��Ÿ���� ��.  ����Ÿ��
// true_type / false_type : �� ������ ��Ÿ���� Ÿ��.
typedef integral_constant<bool, true> true_type;
typedef integral_constant<bool, false> false_type;

// ���� is_pointer�� �Ʒ� ó�� ����ϴ�.
template<typename T> struct is_pointer : false_type {};

template<typename T> struct is_pointer<T*>:true_type {};
*/
// �� �ڵ尡 �Ʒ� ����� �ֽ��ϴ�.
#include <type_traits>

template<typename T> void printv_imp(T a, true_type)
{
	cout << a << " : " << *a << endl;
}
template<typename T> void printv_imp(T a, false_type)
{
	cout << a << endl;
}
template<typename T> void printv(T a)
{
	printv_imp(a, is_pointer<T>()); 
}


int main()
{
	int    n = 10;
	printv(n);
}



