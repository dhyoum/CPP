#include <iostream>
using namespace std;

// 1. new�� ��Ȯ�� ���� ��� - 23 page

// (A). operator new()��� �Լ��� �޸� �Ҵ�
// (B). (A)�� �����ϸ� ������ ȣ��
// (C). �ּҸ� �ش� Ÿ������ ��ȯ

class Point
{
	int x, y;
public:
	Point() { cout << "Point()" << endl; }
	~Point() { cout << "~Point()" << endl; }
};

int main()
{
//	Point* p1 = new Point;
//	delete p1;

	// ������ ȣ����� �޸𸮸� �Ҵ��ϴ� ���
	Point* p2 = static_cast<Point*>(
			operator new(sizeof(Point)));

	// �Ҵ�� �޸𸮿� �����ڸ� ȣ�� - �̹��ð��ٽ�
	new (p2) Point;

	// �Ҹ��� ȣ��
	p2->~Point();

	operator delete(p2); // �޸� ����
}













// PC ��ȣ 

// "��ķ" �Դϴ�










