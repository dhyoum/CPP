#include <iostream>
using namespace std;

// �ٽ� ) ��� ���� ǥ������ �ٸ� Ÿ���̴�.
int main()
{
	auto f1 = [](int a, int b) { return a + b; };
	auto f2 = [](int a, int b) { return a + b; };


	// error
	// ����ǥ�������� �ʱ�ȭ�� auto �������� �ٸ�
	// ����ǥ������ ������ ����
	f2 = [](int a, int b) { return a + b; }; // ?


	// f1, f2 �� ���� Ÿ���ϱ�� ? �ٸ� Ÿ�� �ϱ�� ?
	cout << typeid(f1).name() << endl;
	cout << typeid(f2).name() << endl;
}






