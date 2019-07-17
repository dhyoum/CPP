#include <iostream>
#include <string>
#include <vector>
using namespace std;

// ��ü�� �ڿ��� �Ҵ��ϸ�
// 3���� �Լ�(�Ҹ���, ���� ������, ���Կ�����)
// �� �߰��� �ʿ� �ϴ�  => rule of 3  ( C++98 ����)

// C++11 ���ʹ� "move ������, move ���Կ�����" ��
// ������  => rule of 5



// move �迭�� �Լ� ������ ��� ����� move�� �Űܾ� �Ѵ�.


class Data
{
	int* buff;
	string str;
	int data;
public:
	Data(string s) : str(s) { buff = new int[100]; }

	~Data() { delete[] buff;}

	// ���� ������
	Data(const Data& d)
		: str(d.str), data(d.data)
	{
		// ������ ����� �޸� ��ü�� ����
		buff = new int[100];
		memcpy(buff, d.buff, sizeof(int) * 100);
	}
	// ���� ������
	Data& operator=(const Data& d)
	{
		// ���Կ����ڴ� �׻� �ڽŰ��� ������ �����ؾ� �Ѵ�
		if (&d == this) return *this;

		str = d.str;
		data = d.data;

		// ���� ���۴� ����(�޸� ũ�Ⱑ �ٸ��� �����Ƿ�)
		delete[] buff;
		buff = new int[100];
		memcpy(buff, d.buff, sizeof(int) * 100);

		return *this;
	}
	// move ������
	Data(Data&& d)
		: str(std::move(d.str)), data(d.data), buff(d.buff)
	{
		d.buff = nullptr;
	}






	// move ���� ������
	Data& operator=(Data&& d)
	{
		// ���Կ����ڴ� �׻� �ڽŰ��� ������ �����ؾ� �Ѵ�
		if (&d == this) return *this;

		str = std::move(d.str);
		data = d.data;

		// ���� ���۴� ����(�޸� ũ�Ⱑ �ٸ��� �����Ƿ�)
		delete[] buff;

		buff = d.buff;
		d.buff = nullptr;

		return *this;
	}
};
int main()
{
	Data d1("AA");
	//Data d2 = d1; // ���� ������

	Data d3("BB");
	d3 = d1;  // ���� ������ d3.operator=(d1)

//	d3 = d3;
}

//int n;
//(n = 10) = 20;






