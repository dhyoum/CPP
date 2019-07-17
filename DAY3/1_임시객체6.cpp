#include <iostream>
using namespace std;

struct Base { int value = 10; };

struct Derived : public Base
{
	int value = 20;    // C++11�� �̷��� ��밡��
};

int main()
{
	Derived d;
	cout << d.value << endl; //  20

	// ���� �̸��� ��� Ŭ���� ����� �����Ϸ���
	// ���Ŭ���� Ÿ������ ĳ�����Ѵ�.
	cout << static_cast<Base>(d).value << endl; // 10
	cout << static_cast<Base&>(d).value << endl; // 10

	// �Ʒ� �ڵ��� ������ ����� Ȯ���� ������
	static_cast<Base>(d).value = 20;  // error
	static_cast<Base&>(d).value = 20; // ok

	// �� ĳ������ �ӽð�ü�� �����ϰ� �˴ϴ�.
}

// �ӽð�ü
// 1. ����ڰ� ����⵵ �մϴ�. - �Լ� ���ڷ� �����Ҷ�

// 2. �����Ϸ��� ���� ����� ���⵵ �մϴ�.
//     �Լ��� ������ ��ȯ�Ҷ�
//     �� Ÿ������ ĳ�����Ҷ�
//     ����ǥ������ ����Ҷ�










