#include <iostream>
#include <tuple>
using namespace std;

// �������� ���ø��� ����� C++11 ǥ���� Ʃ�� �����..

tuple<int, double> goo() {}

int main()
{
	int x[2] = { 1,2 };

	tuple<int, double> t2(1, 3.4);
	tuple<int, double, short> t3(1, 3.4, 2);

	double d = get<1>(t3);
	int n    = get<0>(t3);
}



