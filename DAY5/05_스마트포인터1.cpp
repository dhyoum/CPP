#include <iostream>
using namespace std;

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
	~Car()    { std::cout << "~Car" << std::endl; }
};
// �Ʒ� �ڵ尡 �ٽ��Դϴ�.
// ���� : ������ ��ü�� �ٸ� Ÿ���� ������ ��Ȱ��
//        �ϴ� ��
// ���� : -> �� * �������� ������
// ���� : �Ҹ��ڿ��� �ڵ����� ��ü�� ���� �Ҽ� �ִ�.

class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}

	~Ptr() { delete obj; }

	Car* operator->() { return obj; }
	Car& operator*() { return *obj; }
};

int main()
{
	Ptr p = new Car; // Ptr p( new Car )

	(*p).Go();

	p->Go(); // (p.operator->())Go() ������
			 // (p.operator->())->Go() �� �ؼ��˴ϴ�.
}


