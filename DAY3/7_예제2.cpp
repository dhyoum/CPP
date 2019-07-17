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
		try
		{
			// buff ~ buff+sz ������ value�� ���� �����ش޶�
			// ���н� ���� �߻�
			// cppreference.com ���� �Ʒ� �Լ� ã�ƺ�����
			std::uninitialized_fill(buff, buff + sz, 
								value);
		}
		catch (...)
		{	
			operator delete(buff); // �޸� ����
		}
	}
	~Vector()
	{
		for (int i = 0; i < size; i++)
			buff[i].~T();

		operator delete(buff);
	}
	void resize(int newSize, const T& value = T())
	{
		if (newSize > capacity)
		{
			// �޸� ���Ҵ��� �ʿ��� ���
			// ����1. ����Ʈ ������ �ʿ�
			//    2. ������ ���� ���ۿ��� �����Ұ��̴�.
			//       �ڿ� �Ҵ��� �ʿ� ����.
			//T* temp = new T[newSize];

			T* temp = static_cast<T*>(
				operator new(sizeof(T)*newSize));

			// ���� ������ ��ü�� ���ο� ���۷� ����
			for (int i = 0; i < size; i++)
			{
				//new(&temp[i]) T; // ����Ʈ ������
				//new(&temp[i]) T(buff[i]); // ���� ������
				//new(&temp[i]) T(move(buff[i])); // move ������

				new(&temp[i]) T(move_if_noexcept(buff[i]));
			}
			// ���ο� ������ ���� �����ڷ� �ʱ�ȭ
			for (int i = size; i < newSize; i++)
			{
				new(&temp[i]) T(value);
			}
			// ���� ���� �Ҹ��� ȣ���� �ı�
			for (int i = 0; i < size; i++)
			{
				buff[i].~T();
			}
			operator delete(buff);

			buff = temp;
		}
		else
		{
			// �޸� ���Ҵ��� �ʿ� ���� ���
			// �����غ�����...
		}
	}
};

int main()
{
	Vector<Point> v(5, Point(0, 0));

	v.resize(10, Point(0,0));
}

