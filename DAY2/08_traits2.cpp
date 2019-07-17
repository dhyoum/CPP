#include <iostream>
using namespace std;
// T�� ���������� �����ϴ� ���

// traits : T�� �پ��� Ư���� �����ϴ� ���
// 76 page
// traits ����� ��� ( 76 page�Ʒ� �κ�)
// 1. ����ü ���ø��� �����.
// 2. value = false �� �ִ´�.
// 3. ������ �����ϴ� �κ�Ư��ȭ�� �����
//    value = true �� ����

template<typename T> struct IsPointer
{
//	enum { value = false };  // ���� ��Ÿ��

	// C++11���Ŀ��� �Ʒ� ó�� ����� �˴ϴ�.
	static constexpr bool value = false; 
};
template<typename T> struct IsPointer<T*>
{
	//enum { value = true };
	static constexpr bool value = true;
};

template<typename T> void foo(T a)
{
	if ( IsPointer<T>::value )
		cout << "������" << endl;
	else
		cout << "������ �ƴ�" << endl;
}


int main()
{
	int n = 10;
	foo(n);
	foo(&n);
}

