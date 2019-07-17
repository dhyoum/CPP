#include <iostream>
using namespace std;

class Point
{
public:
	int x, y;
	Point(int a, int b) : x(a), y(b) { cout << "Point()" << endl; }
	~Point() { cout << "~Point()" << endl; }

	Point(const Point& p) { cout << "copy ctor" << endl; }
};

// �ӽð�ü�� �Լ� ����
// ���������� ����� ������ȯ�ϸ� �ȵ˴ϴ�.
/*
Point& foo()    // ����..!
{
	Point p(1, 2);
	return p;  
}
*/
Point foo()
{
	// ���򿡴� �Ʒ� ó�� ��ȯ�ص�
	// ����ȭ �˴ϴ�.
	// Named RVO ( NRVO)
	// cafe.naver.com/cppmaster
//	Point p(1, 2);
//	return p;

	// ����� �������� ����
	// ����鼭 ��������
	// RVO ( Return Value Optimization ) 232 �Ʒ��κ�  
	return Point(1, 2);
}

int main()
{

	Point p1(0, 0);

	p1 = foo();

	cout << "---------" << endl;
}









