#include <iostream>
#include <vector>
using namespace std;

int x = 10;

int& foo() { return x; }

int main()
{
	auto ret = foo();   // ret Ÿ���� ? int
	ret = 20;

	// decltype(�Լ�ȣ���) : �Լ�ȣ���� ����� 
	//			������Ÿ��. �� �Լ� ��ȯ Ÿ��
	decltype( foo() ) ret2 = foo(); // int&

	// C++14 ���� ���� ǥ����
	// �캯����Ÿ���� �����ϴµ�
	// ��Ģ�� decltype ��Ģ���� �ش޶�!
	decltype(auto) ret3 = foo();

}






