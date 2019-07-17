#include <iostream>
using namespace std;

struct Point3D
{
	int x, y, z;

	Point3D(int a = 0, int b = 0, int c = 0) : x(a), y(b), z(c) {}
};
int* begin(Point3D& pd) { return &(pd.x); }
int* end(Point3D& pd)   { return &(pd.z) + 1; }

// ���� : end()�� �������� �ƴ� ������ ������ ����Ű��
//        �ݺ��ڸ� ��ȯ�ؾ� �մϴ�.
int main()
{
	Point3D pd(1, 2, 3);

	// �Ʒ� �ڵ尡 �ɱ�� ?
	for (auto n : pd)
		cout << n << endl;
	/*
	for (auto p = begin(pd); p != end(pd); ++p)
	{
		int n = *p;
		//-----------------
		cout << n << endl;
	}
	*/
}