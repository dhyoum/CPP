#include <iostream>
#include <string>
#include <type_traits>
#include <vector>
using namespace std;


class Object
{
	string data;
public:
	Object() = default;
	~Object() {}

	Object(const Object& o) : data(o.data) { cout << "Copy Ctor" << endl; }

	Object& operator=(const Object& o)
	{
		cout << "Copy =" << endl;
		if (&o == this) return *this;
		data = o.data;
		return *this;
	}

	Object(Object&& o) noexcept : data(move(o.data)) { cout << "Move Ctor" << endl; }

	Object& operator=(Object&& o)noexcept
	{
		cout << "Move =" << endl;
		if (&o == this) return *this;
		data = move(o.data);
		return *this;
	}
};

// �ڵ������Ǵ� �Լ���

// ��Ģ 1. 
// ���� �迭�� move �迭�� ��� ������ ������
// �����Ϸ� ��� ����
// ���� �迭������ ��� ����� �������ְ�
// move �迭������ ��� ����� move���ش�.

// ��Ģ 2.
// ���� �迭�� ����ڰ� �����ϸ�
// �����Ϸ��� move �迭�� �������� �ʴ´�.
// move �ÿ��� ����ڰ� ���� ���� �����ڸ� ����ϰ� �ȴ�.

// rule of 0 : �ڿ��� ���� �������� ����
//			�ڿ� ���� Ŭ������ �������.!!
// ����迭�� move�迭�� ����ڰ� ���� �ʿ� ����.
class Data
{
//	string s;
//	vector<int> v;
	Object obj;
public:
	Data() = default;
	Data(const Data& d) : obj(d.obj) {}
};

int main()
{
	Data d1;
	Data d2 = d1;
	Data d3 = move(d1);
}




