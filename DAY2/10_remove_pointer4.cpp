#include <iostream>
#include <type_traits> // C++11 ���� �����Ǵ� ���
using namespace std;

template<typename T> struct remove_all_pointer
{
	typedef T type;
};
template<typename T> struct remove_all_pointer<T*>
{
	typedef typename remove_all_pointer<T>::type type;
};

int main()
{
	remove_all_pointer<int***>::type n1;
	cout << typeid(n1).name() << endl; // int
}




