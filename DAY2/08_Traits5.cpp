#include <iostream>
#include <type_traits>
using namespace std;


// 90 page ���� �Ʒ� �κ�
// ������ �϶��� ���
template<typename T> void printv_pointer(T a)
{
	cout << a << " : " << *a << endl;
}
// �����Ͱ� �ƴҶ��� ���
template<typename T> void printv_not_pointer(T a)
{
	cout << a << endl;
}
template<typename T> void printv(T a)
{
	if (is_pointer<T>::value)   
		printv_pointer(a);
	else
		printv_not_pointer(a);
}


int main()
{
	int    n = 10;
	printv(n);  
}





