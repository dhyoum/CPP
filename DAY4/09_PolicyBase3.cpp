#include <iostream>
#include <vector>
using namespace std;
// allocator

struct Point
{
	int x, y;
	Point(int a = 0, int b = 0) { std::cout << __FUNCSIG__ << std::endl; }
	
	~Point() { std::cout << __FUNCSIG__ << std::endl; }
};
int main()
{
	// C++ ǥ�� �޸� �Ҵ��
	std::allocator<Point> ax;

	Point* p = ax.allocate(2); // Point 2���Ҵ�
	cout << p << endl;

	// ������ ȣ��
	ax.construct(p,   1, 2); // new(p) Point(1,2)
	ax.construct(p+1, 1, 2);

	// �Ҹ��� ȣ��
	ax.destroy(p);
	ax.destroy(p+1);

	// �޸� ����
	ax.deallocate(p, 2);
	


}


