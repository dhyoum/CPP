#include <iostream>
using namespace std;

// 74 page

// traits : ���ø� ���� T�� ���� �پ���
//			�Ӽ�(Ư��,traits)�� �����ϴ� ���

template<typename T> void printv(T a)
{
	if (T �� ������ Ÿ�� �̸�)
		cout << a << " : " << *a << endl;
	else
		cout << a << endl;
}

int main()
{
	int    n = 10;
	double d = 3.3;

	printv(n);
	printv(d);
	printv(&n);
}





