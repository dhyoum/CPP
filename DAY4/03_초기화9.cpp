#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

// 214 page
// aggregate
// aggregate type : ������ ��� {} �� �ʱ�ȭ ������
//			Ÿ��. �迭, C����ü��
struct Point
{
	int x, y;

//	Point() {} // �� ��� ������ aggreate �ƴ�
	
	Point() = default; // aggregate 

	void foo() {}

	virtual void goo() {}

//	Point() {}
//	Point(int a, int b) {}
};
int main()
{
	Point p1;
	Point p2 = { 0, 0 };

//	Point p2(0,0);
}

