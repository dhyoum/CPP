#include <iostream>
using namespace std;

struct Base 
{
	int value = 10;  // C++11 ���� ������ �ʱ�ȭ
};
struct Derived : public Base 
{
	int value = 20;
};

int main()
{
	Derived d;
	cout << d.value << endl;
	
	// 149
	// ��� Ŭ���� ����� �����Ϸ���
	// ��� Ŭ������ ���� Ÿ������ĳ�����մϴ�.
	cout << static_cast<Base&>(d).value << endl;

	// �� Ÿ������ ĳ�������� ������ -���� 1����

}






