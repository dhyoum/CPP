// 7_����
#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
};
// STL vector�� ������ ������ ���ô�.
template<typename T> class Vector
{
	T* buff;
	int size;
	int capacity;
public:
	Vector(int sz, T value = T()) : size(sz), capacity(sz)
	{
	//	buff = new T[size]; // ���� �ڵ� (����Ʈ �����ڸ� �䱸�Ѵ�.)

		// 1. �޸𸮸� �Ҵ� �Ѵ�.
		buff = static_cast<T*>(
			operator new(sizeof(T) * sz));

		// 2. �� ��ü�� �����ڸ� ȣ��
		int cnt = 0;
		try
		{
			for (int i = 0; i < sz; i++)
			{
				//new(&buff[i]) T;  // ����Ʈ ������
				new(&buff[i]) T(value); // ���� ������
				cnt = i;
			}
		}
		catch (...)
		{
			// ������ȣ�⿡ ������ ��ü�� �Ҹ��� ȣ��
			for (int i = 0; i < cnt; i++)
				buff[i].~T();

			operator delete(buff); // �޸� ����
		}
	}
	~Vector()
	{
		for (int i = 0; i < size; i++)
			buff[i].~T();

		operator delete(buff); 
	}
};

int main()
{
	Vector<Point> v(5, Point(0,0));
}

