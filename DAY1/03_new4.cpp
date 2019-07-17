#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int a, int b) {}
};

int main()
{
	// ���� Point �Ѱ��� ����� ������
	Point* p1 = new Point(0, 0);

	// ���� Point 10���� ����� ������
	//Point* p2 = new Point[10]; // ?

	// �޸� �Ҵ�� ������ ȣ���� �и��ϸ� ���ϴ�
	Point* p3 = static_cast<Point*> (
		operator new(sizeof(Point) * 10));

	// 10���� �޸𸮿� ��ü�� �����Ѵ�.(������ ȣ��)
	for (int i = 0; i < 10; i++)
		new( &p3[i] ) Point(0, 0);

	// ��ü�ı�
	for (int i = 0; i < 10; i++)
		p3[i].~Point();

	// �޸� ����
	operator delete(p3);
}







