#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// move ���� Ȱ��
// 1. swap ���� �˰����� ���鶧
//    ���簡 �ƴ� move �� ����ϸ� ������ ���ȴ�.

// 2. Ŭ������ ���鶧
//    �ǵ��� �̸� move �����ڸ� ��������.
//    �������� ������ ���� �����ڸ� ����ϰ� �ȴ�.


// move�� �˰���
// �Ʒ� �ڵ��� �������� �̾߱��� ������
// �Ʒ� �ڵ�� ���翡 ���� Swap �Դϴ�. �����ϴ�.
/*
template<typename T> void Swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
*/
template<typename T> void Swap(T& a, T& b)
{
	T tmp = std::move(a);
	a = std::move(b);
	b = std::move(tmp);
}

int main()
{
	string s1 = "hello";
	string s2 = "world";

	Swap(s1, s2);
}


