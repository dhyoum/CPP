// 08_traits3_1
#include <iostream>
using namespace std;

// C++11���� �پ��� traits �� ǥ�ؿ� �߰��Ǿ����ϴ�
#include <type_traits>
template<typename T> void foo(T& a)
{
	if (is_pointer<T>::value)
		cout << "������" << endl;
	else
		cout << "�����;ƴ�" << endl;
}
int main()
{
	int n = 0;
	foo(&n);

	cout << is_pointer<int>::value << endl;
}
