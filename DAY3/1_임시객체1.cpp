// �⼮(QR) üũ ���ּ��� cafe.naver.com/cppmaster 
// 3���� �����ҽ� �����ø� �˴ϴ�.







#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) { cout << "Point()" << endl; }
	~Point()                         { cout << "~Point()" << endl; }
};
// 226 page

// �ٽ� : 1. �ӽð�ü�� ����� ���
//        2. �ӽð�ü�� ����

int main()
{
	//Point p(1, 2); // �̸� �ִ� ��ü.. ��({})�� ������ �ı� �ȴ�.
	
	//Point(1, 2);  // �̸� ���� ��ü
				  // �ӽð�ü(temporary)
				  // Ŭ�����̸�()
				 // ������ ������ �ı�

	Point(1, 2), cout << "X" << endl;

	cout << "---------" << endl;
}








