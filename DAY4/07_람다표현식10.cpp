#include <iostream>
using namespace std;

/*
// �Լ� ���ڴ� �ᱹ ���������Դϴ�.
void goo(int a, int b)
{
	int c;
	auto f = [=]() {return a + b +c; }; // ok..

	cout << sizeof(f) << endl; // 12
}
*/

class Test
{
	int data;
public:
	void foo()  
	{
		// ��� ���� ĸ��
		auto f = [](int a) { return data + a; };//error
		
		//error. data �� �������� �ƴ�
		auto f = [data](int a) { return data + a; };

		// ok.. ��� ����Ÿ�� ���� �Ϸ��� this ĸ��
		auto f = [this](int a) { data = 10; return data + a; };
		auto f = [=](int a) { return data + a; }; // ok

		// *this ĸ�� : C++20
		//auto f = [*this](int a) { data = 10; return data + a; };
	}

};

int main()
{
	Test t;
	t.foo(); // foo(&t)
}


