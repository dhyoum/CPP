// 5_override
#include <iostream>
using namespace std;

/*
int n = 0;

const int* p1 = &n; // p1�� ���󰡸� const
int* const p2 = &n; // p2�� const
int const* p3 = &n; // p3�� ���� ���� const
*/

//const int c = 10;
//int const c = 10; // ���� ������ ����

template<typename T> class Base
{
public:
	// a�� const
	// virtual void foo( T const a)
	virtual void foo(const T a)  {	cout << "Base foo" << endl;	}
};

class Derived : public Base<int*>
{
public:
	// foo ������ �ؼ� "Derived foo" ��� ����� ������
	// �Ʒ� ǥ����� a�� ���󰡸� const
	//virtual void foo(const int* a) //override
	virtual void foo(int* const a)
	{ 
		cout << "Derived foo" << endl;
	}
	//virtual void foo(int* const a)

};

int main()
{
	Base<int*>* p = new Derived;
	p->foo(0);   // "Derived foo" ������ �غ�����
}








