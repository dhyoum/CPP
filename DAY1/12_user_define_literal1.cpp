#include <iostream>
using namespace std;

// 183 page
// ����� ���� Literal �Լ�
// ���� Literal : ���ڸ� unsigned long long 
// �Ǽ�         : long double
// ���ڿ�       : const char*, size_t �� ����..

class Meter
{
	int value;
public:
	Meter(int n = 0) : value(n) {}
};

Meter operator""_m(unsigned long long n)
{
	cout << "operator m" << endl;

	Meter m(n);
	return m;
}
int main()
{
	float f = 3.4f;

	Meter v = 10_m; // operator""m(10) �Լ���
					// ã�� �˴ϴ�.

}







