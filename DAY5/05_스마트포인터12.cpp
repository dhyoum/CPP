#include <iostream>
#include <memory>
using namespace std;


struct Point
{
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

void* operator new(size_t sz)
{
	std::cout << "new : " << sz << std::endl;
	return malloc(sz);
}

int main()
{
	// �Ʒ� �ڵ�� ���� �޸� �Ҵ��� ����ϰ� �ɱ�� ?
	shared_ptr<Point> sp(new Point(1, 2));

	// make_shared<Point>(1,2) �� �����ϴ�.
	// �Ϻ��� ������ �ҽ� ����

}



