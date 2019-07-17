#include <iostream>
#include <string>
#include <type_traits>
#include <vector>
using namespace std;

// move�� ����

class Object
{
	string data;
public:
	Object() = default;
	~Object() {}

	Object(const Object& o) : data(o.data)      { cout << "Copy Ctor" << endl; }

	Object& operator=(const Object& o)
	{
		cout << "Copy =" << endl;
		if (&o == this) return *this;
		data = o.data;
		return *this;
	}

	// noexcept : �Լ��� ���ܰ� ���ٰ� �����Ϸ�����
	//           �˷� �ִ� ��

	// move �迭 �Լ��� ���鶧
	// 1. ���ܰ� ������ �����
	// 2. �Լ� () �ڿ� noexcept��
	// ���̴� ���� ����.
	// noexcept : ���ܰ� ����.
	// noexcept(true) : ���ܰ� ����.
	// noexcept(false) : ���ܰ� �ִ�
	Object(Object&& o)
		noexcept( 
			is_nothrow_move_constructible<string>::value )
		: data(move(o.data))
	{
		cout << "Move Ctor" << endl; 
	}

	Object& operator=(Object&& o) noexcept(
		is_nothrow_move_constructible<string>::value)
	{
		cout << "Move =" << endl;
		if (&o == this) return *this;
		data = move(o.data);
		return *this;
	}

};

int main()
{
	vector<Object> v(5);
	v.resize(10);

	Object o1;
	Object o2 = o1; // ���������
	Object o3 = std::move(o1); // move������
	Object o4 = std::move_if_noexcept(o2);
				// ���ܰ� ������ move
				// ���ܰ� ������ ���� ������ ȣ��
}




