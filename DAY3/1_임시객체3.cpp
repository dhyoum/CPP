#include <iostream>
using namespace std;

class Point
{
public:
	int x, y;
	Point(int a, int b) : x(a), y(b) { cout << "Point()" << endl; }
	~Point() { cout << "~Point()" << endl; }
};

// �ӽð�ü�� �Լ� ���� - 230 page
// �Լ����ڷ� �ӽð�ü�� ����ϴ� ��찡 ���� �ִ�.
void foo(const Point& p)
{
}
int main()
{
//	Point pt(1, 2);
//	foo(pt);

	foo(Point(1, 2)); // �ӽð�ü�� ����� ���� ����

	cout << "---------" << endl;
}









