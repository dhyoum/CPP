#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

// �Ʒ� �ڵ尡 ���� �߿� �մϴ�.
class Point
{
public:
	Point(int a, int b)          { cout << "int, int" << endl; }
	Point(initializer_list<int>) { cout << "initializer_list" << endl; }
};
int main()
{
	// �Ʒ� �ڵ尡 ���� � �����ڸ� ȣ������ �����غ�����

	Point p0(1, 1);     // 1
	Point p1({ 1, 1 }); // 2

	Point p2{ 1, 1 }; // �ٽ�. 2���� �켱�õ�. ������
					//      1��

	Point p3 = (1, 2); // error

	Point p4 = { 1, 1 };  // 2���� �켱. ������ 1��

	Point p5(1, 1, 1); // error
	Point p6{ 1,1,1 };  // ok
	Point p7 = { 1,1,1 };  // ok

	// C++11 ���� �Ʒ�ó�� ǥ�Ⱑ �����մϴ�.
	// initializer_list ������ ������ ǥ���
	vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };


	// �Ʒ� 2���� �������� ?
	vector<int> v1(10, 2); // 10���� 2�� �ʱ�ȭ
	vector<int> v2{10,2};  // 2���� 1,2


	vector<int> v3 = 10;    // error.
	vector<int> v4 = { 10 };// ok
}






