#include <iostream>
#include <vector>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int a, int b) {}


	// �����Ϸ��� ���� �����ڸ� ������ ���ϰ� �Ѵ�.
	// �Լ� ���� ������ �ַ� "���������" "���Կ�����"
	// �� ���ﶧ ���
	Point(const Point&) = delete;
	void operator=(const Point&) = delete;

	// ������ ����ߴ� ��������ڸ� ������� ���ϰ�
	// �ϴ� ���. - private�� ����.
//private:
//	Point(const Point&);



//	Point() {} // ����ڰ� ����� ����Ʈ ������

	Point() = default; // �����Ϸ����� ����Ʈ������
					   // �� ����� �޶�� ��û
};

int main()
{
	Point p1(1, 2);
//	Point p2 = p1;  // Point p2(p1) error

	Point p3;
}



// github.com/webkit  ������ ������
// github.com/tensorflow

// source/wtf/wtf/scope.h  ���� ���� ������

