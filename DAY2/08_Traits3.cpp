#include <iostream>
using namespace std;

int a;    // a�� int Ÿ��
double d; // d�� double
int x[3]; // x�� Ÿ�� int[3]
			// T[N]


// IsPointer�� �����ؼ� IsArray ����� ������

template<typename T> struct IsArray
{
	static constexpr bool value = false;
	static constexpr int size   = -1;
};

template<typename T, int N> struct IsArray<T[N]>
{
	static constexpr bool value = true;
	static constexpr int size = N;
};

template<typename T> void foo(T& a)
{
	// T : int[3]
	if (IsArray<T>::value)
		cout << "�迭 �Դϴ�. ũ��� " << IsArray<T>::size << endl;
	else
		cout << "�迭 �ƴ�" << endl;
}
int main()
{
	int x[3] = { 1,2,3 };
	foo(x);					
}





