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

// 231 page
// call by value : ���纻�� �����Ѵ�.
void goo(Point pt) {}


Point p(0, 0); 

// return by value : �ӽð�ü�� �����ؼ� ��ȯ�ȴ�.
//			���Ͽ� �ӽð�ü�� �Լ�ȣ�ⱸ���� �������ı�
Point foo()   
{
	return p;
}
// ���� ��ȯ : �ӽð�ü�� ������ ����� �ǹ�. 233 p
Point& goo()  
{
	return p;
}

int main()
{
	//foo().x = 10; // error
	goo().x = 10; // ok
	cout << p.x << endl;
}









