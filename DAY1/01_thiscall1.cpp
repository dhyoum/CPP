#include <iostream>
using namespace std;

// ���� 6 page ~
// ���� : ��� �Լ��� ȣ�����

// �ٽ� 1. ��� �Լ��� ���ڷ� this �� �߰��ȴ�.
//      2. static ��� �Լ��� ���ڷ� this�� �߰����� 
//			�ʴ´�.
class Point
{
	int x;
	int y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) {}

	void set(int a, int b) // set(Point* this , int a, int b)
	{
		x = a; // this->x = a
		y = b; // this->y = b
	}

	static void foo(int a) // foo(int a)
	{
		x = a; // this->x = a�� �����ؾ� �ϴµ�
				//this �� ����.
		// �׷���, static ����Լ�������
		// ��� ����Ÿ�� ������ �ȵȴ�. 
	}
};

int main()
{
	Point::foo(10); // ��ü���� ȣ�Ⱑ��

	Point p1, p2;

	p1.set(1, 2); // set(&p1, 10, 20) �� �����Դϴ�
				  // push 20
				  // push 10  ��¥ ���ڴ� ��������
				  // mov ecx, &p1 // ��ü�� �������Ϳ�
				  // call Point::set

	getchar();
}
