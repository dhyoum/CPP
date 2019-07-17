#include <iostream>
using namespace std;

// traits ����� ����ϱ� ���� ǥ�� ���
#include <type_traits>


template<typename T> void foo_imp(T a, true_type)  
{
	*a = 10; // ok.. �ƹ� ���� ����.
}

template<typename T> void foo_imp(T a, false_type) {}


template<typename T> void foo(T a)
{
	// T�� ������ ���� �����ϴ� 3���� ���. 96
	// ��� 1. is_pointer<T>::value �� if�� ����
	if (is_pointer<T>::value)
	{
		//*a = 10; // ��, �̷� ǥ����� ����Ҽ� ����.
	}
	else
	{
	}

	// ��� 2. true_type/false_type�� �����
	//         �Լ� �����ε�
	foo_imp(a, is_pointer<T>());


	// ��� 3. is_pointer<T>::value �� if constexpr�� ����
	//      C++17 
	if constexpr (is_pointer<T>::value)
	{
		*a = 10; // ok  
	}
}



int main()
{
	int n = 0;
	foo(n);
}




