#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

// 209 page
// value initialization vs default
struct Point
{
	int x, y;

	//Point() {}

	Point() = default;
};

int main()
{
	Point p1;
	Point p2{}; // ��� ����� 0���� �ʱ�ȭ

	cout << p2.x << endl;

//	int n1;  // �����Ⱚ      default �ʱ�ȭ
//	int n2{};// ����Ʈ ��(0)���� �ʱ�ȭ. value �ʱ�ȭ

//	cout << n1 << endl; 
//	cout << n2 << endl;
}


