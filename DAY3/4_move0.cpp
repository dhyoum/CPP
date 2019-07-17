#include <iostream>
using namespace std;

// �ٽ� : ���� �����ڸ� const lvalue reference�� 
//			����� ����!

class Point
{
	int x = 0;
	int y = 0;
public:
	Point() : x(0), y(0) {}
	Point(int a, int b) : x(a), y(b) {}

	// ���� ������ ��翡 ���ؼ�
	// 1. call by value
	// ���� �����ڰ� ������ ȣ��Ǵ� ǥ���Դϴ�.
	// ������ ����
	//Point(Point pt) {} // Point pt = p2
	// 2. call by reference
	// ���� : �ӽð�ü(rvalue)�� ������ �����ϴ�.
	//       ��Ÿ���� ��ȯ�ϴ� �Լ��� ���ϰ��� ������
	//		 ����.
	//Point(Point& pt) {}

	// 3. const lvalue reference
	Point(const Point& pt) 
		: x(pt.x), y(pt.y) {}
};

Point foo()
{
	Point pt;
	return pt;
}
int main()
{
	Point p1;
	Point p2(1, 2);
	Point p3(p2); //Point(Point) ����� �������ʿ�
	Point p4 = foo();
}