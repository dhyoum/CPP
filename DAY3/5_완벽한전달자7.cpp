#include <vector>
#include <memory> // C++ ǥ�� ����Ʈ������
#include <memory>
#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int a = 0,   int b = 0) : x(a), y(b) { cout << "Point()" << endl; }
	~Point()						         { cout << "~Point()" << endl; }
};

void* operator new(size_t sz)
{
	cout << "new : " << sz << endl;
	return malloc(sz);
}

// C++ ǥ���� make_shared �� ����
template<typename T, typename ... Types>
shared_ptr<T> make_shared(Types&& ... args)
{
	// 1. sizeof(��ü) + sizeof(������ü)��
	//    �ѹ��� �Ҵ�
	void* p = operator new(sizeof(T) +
							sizeof(������ü));
	// 2. �޸� �պκ��� ��ü �Դϴ�.
	//    �����ڸ� ȣ���մϴ�.
	new(p) T (std::forward<Types>(args)...);

	// 3. ������ü ������
	new((char*)p + sizeof(T)) ������üŸ��;

	// 4. shared_ptr���� ��ȯ
	shared_ptr<T> sp;
	sp.reset(p, (char*)p + sizeof(T));
	return sp;
}

int main()
{
	// �Ʒ� �ڵ�� new�� ��� ����ұ�� ?
	// shared_ptr<Point> sp(new Point(1, 2));

	// sizeof(��ü) + sizeof(������ü)�� �ѹ��� �Ҵ�
	shared_ptr<Point> sp =
			make_shared<Point>(1, 2);

}






/*
int main()
{
	vector<Point> v;
	// 271 page
	// vector�� ��ҳֱ� 1.

	//Point pt(1, 2);
	//v.push_back(pt);

	// 2. �ӽð�ü�� �ֱ�
	// v.push_back(Point(1, 2));


	// 3. ��ü�� �������� ����
	//  ��ü�� ����� ���� ������ ���ڸ� ��������.
	v.emplace_back(1,2);
			// emplace_back�� ����������
			// new Point(1,2) �մϴ�.

	cout << "---------" << endl;
}
*/


