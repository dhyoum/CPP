#include <iostream>
using namespace std;

class Point
{
public:
	int x, y;
	Point(int a, int b) : x(a), y(b) { cout << "Point()" << endl; }
	~Point()                         { cout << "~Point()" << endl; }
};
// �ӽð�ü�� Ư¡ - 228 page
int main()
{
	Point p(1, 2); 
	
	Point* p1 = &p;           // ok
//	Point* p2 = &Point(1, 2); // error
					// �ӽð�ü�� �ּҸ� ���Ҽ� ����.


	p.x = 10;           // ok..
//	Point(1, 2).x = 10; // error. �ӽð�ü��
						// lvalue�� �ɼ� ����.
						 
	Point& r1 = p;		// ok
//	Point& r2 = Point(1, 2); // error


	// �ٽ� : �ӽð�ü�� ��� ������ ����ų�� �ִ�.
	const Point& r2 = Point(1, 2);
		// �ӽð�ü�� ������ r2�� �������� ����˴ϴ�.

	r2.x = 10; // error. const ���� �̹Ƿ�

	// C++11�� ���ο� ������ ���������
	// �ӽð�ü�� ����ŵ�ϴ�.
	Point&& r3 = Point(1, 2);
	r3.x = 10; // ok
}






