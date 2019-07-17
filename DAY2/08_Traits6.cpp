#include <iostream>
#include <type_traits>
using namespace std;

// ������ �϶��� ���
template<typename T> void printv_imp(T a, YES)
{
	cout << a << " : " << *a << endl;
}

// �����Ͱ� �ƴҶ��� ���
template<typename T> void printv_imp(T a, NO)
{
	cout << a << endl;
}

template<typename T> void printv(T a)
{
	// T�� ������ ���ο� ���� �ٸ� �Լ� ȣ��
	printv_imp(a, is_pointer<T>::value );
					// 
}


int main()
{
	int    n = 10;
	printv(n);
}





