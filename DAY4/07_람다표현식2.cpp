#include <iostream>
using namespace std;

int main()
{
	// ����ǥ���� Ȱ��

	// 1. �Լ��� ��å���� ����
	sort(x, x + 10, [](int a, int b) { return a < b;  });


	// 2. auto  ������ ��Ƽ� �Լ� ó�� ��밡��
	
	auto f = [](int a, int b) { return a + b; };
		// class ClosureType{..};ClosureType();

	int n = f(1, 2);

	// ������ ������ ?  f2 
	auto   f1 = [](int a, int b) { return a + b; };
	auto&  f2 = [](int a, int b) { return a + b; };
	auto&& f3 = [](int a, int b) { return a + b; };
	const auto& f4 = [](int a, int b) { return a + b; };

}



