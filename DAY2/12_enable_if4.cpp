#include <iostream>
#include <type_traits>
using namespace std;

// printv ����� 
// 1. is_pointer, true_type, false_type
// 2. enable_if
// 3. if constexpr
/*
// ��� 3
template<typename T> void printv(T v)
{
	if constexpr ( is_pointer<T>::value )		
		cout << v << " : " << *v << endl;
	else
		cout << v << endl;
}

// ��� 1. true_type/false_type
template<typename T> void printv_imp(T v, true_type)
{
	cout << v << " : " << *v << endl;
}
template<typename T> void printv_imp(T v, false_type)
{
	cout << v << endl;
}
template<typename T> void printv(T v)
{
	printv_imp(v, is_pointer<T>());
}
*/
// ��� 2. enable_if �� ����ϴ� ���
// ���ۿ��� "android source github"
// platform_system_core 
// libutils/include/utils/type_helpers.h
// ���� copy_type ã������.. �Լ� ��� ������.

template<typename T> 
//typename enable_if<is_pointer<T>::value>::type
enable_if_t<is_pointer_v<T>>
printv(T v)
{
	cout << v << " : " << *v << endl;
}
template<typename T> 
enable_if_t<!is_pointer_v<T>>
printv(T v)
{
	cout << v << endl;
}
int main()
{
	int n = 10;
	printv(n);
	printv(&n);
}



