#include <iostream>
using namespace std;
/*
int mul(int a, int b)
{
	return a * b;
}
*/
/*
template<typename T>
T mul(T a, T b)
{
	return a * b;
}
*/
/*
template<typename T1, typename T2>
//decltype(a*b) mul(T1 a, T2 b)
auto mul(T1 a, T2 b) -> decltype(a*b)
{
	return a * b;
}
*/
// C++14 ������ auto �� ǥ���ص� �˴ϴ�.
// return ������ ������ ���� Ÿ���� ����
/*
template<typename T1, typename T2>
auto mul(T1 a, T2 b)
{
	return a * b;
}
*/
// return ������ ǥ���� ���� Ÿ���϶�
// ������ �����Ϸ��� - 223 page�� ����� �μ���
template<typename T1, typename T2>
decltype(auto) mul(T1 a, T2 b)
{
	return a * b;
}


int main()
{
	cout << mul(3, 4.2) << endl;

	
//	a = 10; // error
//	int a;
//	a = 10;
}




