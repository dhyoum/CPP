#include <iostream>
using namespace std;

class Point
{
public:
	int x, y;
	
	Point(int a, int b) : x(a), y(b) {}

	Point()
	{
		Point(0, 0); // �����ڿ��� �ٸ� ������ ȣ��?

	}
};

int main()
{
	Point p;

	cout << p.x << endl;
}




