#include <iostream>
using namespace std;

class Point
{
public:
	int x;
	int y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}
	void set(int a, int b) { x = a; y = b; }

	void print() //const // ��� ��� �Լ�
	{
//		x = 10;  // error. ��� ����Լ�������
				 // ��� ����� ������ �ȴ�.
				 // ���� �����Ҽ� ����.
		cout << x << ", " << y << endl;
	}
};

int main()
{
	const Point p(1, 2); // ��� ��ü

	p.x = 10;     // error
	p.set(10, 20);// error
	p.print();    // error.

	// �ٽ� : ��� ��ü�� ��� ��� �Լ���
	//	      ȣ���Ҽ� �ֽ��ϴ� - 17page ����
	//		  ������ print ��� �Լ��� 
	//			�ݵ�� ��� ��� �Լ� �̾�� �մϴ�
}




