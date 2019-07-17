#include <iostream>
#include <string>
#include <complex>
#include <chrono>
using namespace std;
using namespace std::chrono;

void foo(string)		{ std::cout << "string" << endl; }
void foo(const char* )	{ cout << "const char*" << endl; }

int main()
{
	int n1 = 0b1;   // 2���� ǥ��� ����.
	int n2 = 1'000'000; // digit separator

	int x[3] = { 1,2,3 };

	// auto : �캯�� ǥ�������� �º��� Ÿ�� ����
	auto n3 = x[0];

	decltype(n2) n4; // () ���� Ÿ�԰� ����Ÿ��

	//decltype(x[0]) n5; // int&

	for (int i = 0; i < 3; i++)
		cout << x[i] << endl;

	// C++11 range for
	for (auto&& n : x)
		cout << n << endl;

	foo("hello"); // const char*
	foo("hello"s); // STL string

	seconds sec = 1h + 2min + 30s;
	cout << sec.count() << endl;

}










