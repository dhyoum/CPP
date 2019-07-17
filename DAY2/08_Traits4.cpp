#include <iostream>
#include <type_traits>
using namespace std;



template<typename T> void printv(T a)
{
	//if ( is_pointer<T>::value ) // if (false)

	if constexpr( is_pointer<T>::value )
		cout << a << " : " << *a << endl;
	else
		cout << a << endl;
}



int main()
{
	int    n = 10;
	printv(n);   // 1
//	printv(&n);  // 2
}
// �� �����ϱ�� ? 1�� ���� �ϱ�� 2�� �����ϱ��?




