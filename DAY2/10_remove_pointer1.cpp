#include <iostream>
using namespace std;

// 99 page
// traits�� ����
// 1. Ÿ�� ���� : is_xxxx<T>::value
// 2. ���� Ÿ�Ծ�� : xxx<T>::type

// 1. ����ü ���ø��� �����
// 2. typedef T type �Ǵ� using type = T �ֱ�
// 3. ���ϴ� Ÿ���� ������ �ֵ���
//    �κ� Ư��ȭ ������ �����.
//    int* �϶� int�� * �� �и��ɼ� �ְ� �ؾ� �Ѵ�
template<typename T> struct xremove_pointer
{
	//typedef T type;
	using type = T;
};
template<typename T> struct xremove_pointer<T*>
{
	//typedef T type;
	using type = T;
};
int main()
{
	xremove_pointer<int*>::type n; // int
}