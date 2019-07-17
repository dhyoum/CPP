#include <iostream>
using namespace std;

// 28 page
class Point
{
	int x, y;
public:
	Point()  { cout << "Point()" << endl; }
	~Point() { cout << "~Point()" << endl; }
};
// �Ʒ� �Լ��� �߿� �մϴ�.
// �Ʒ� �Լ��� ��ǥ�� �޸� �Ҵ��� �ƴ϶�
// ���� �޸𸮿� ���� �����ڸ� ȣ���ϱ� ���� ����� �Դϴ�
// �Ʒ� �Լ��� C++ ǥ�ؿ� �ֽ��ϴ�.
// "placement new"��� �մϴ�.
/*
void* operator new(size_t sz, void* p)
{
	return p;
}
*/
int main()
{
	Point p;

	//new Point; // ���ڰ� �Ѱ��� operator new()���
	new(&p) Point; // ok. ���� ���� �Լ� ���.



	//p.Point(); // �������� ����� ȣ�� - error
	p.~Point();// �Ҹ����� ����� ȣ�� - ok.
}

// malloc : �޸� �Ҵ�
// new    : ��ü ���� ( �޸� �Ҵ� + ������ȣ��)

// new Point     : ���ο� �޸𸮿� ��ü�������޶�
// new(&p) Point : �̹� �����ϴ� �޸𸮿� 
//					��ü�� ����� �޶�.

// linux ���� �޸� �Ҵ�
Queue* p = (Queue*)mmap(sizeof(Queue));
new(p) Queue; // �����ڸ� ȣ��







