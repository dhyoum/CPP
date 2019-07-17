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

// setter ����� - 251p.
// �߿� �մϴ�. �� �˾� �μ���
class Data
{
	Object obj;
public:
	// 1. call by value
	//void setObject(Object o) { obj = o; }

	// 2. const lvalue reference
	//void setObject(const Object& o) { obj = o; }   // �׻� copy
	//void setObject(const Object& o) { obj = move(o); } //�׻� copy. const object

	// 3. C++11 ���ʹ� 2���� setter�� ����� ����
	//    �����ϴ�. -�Ʒ� �ڵ�� �ְ��� �ڵ��Դϴ�.
	//void setObject(const Object& o) { obj = o; }
	//void setObject(Object&& o)      { obj = move(o); }





	// 4. call by value�� ���� ?
	// move�� ����� �����ٸ� call by value��
	// ���� �������� �ʴ�.
	//void setObject(Object o) { obj = move(o); }

	// github.com/webkit
	// source/wtf/wtf/scope.h

	// 5. forwarding reference�� ����ϸ�
	// 3��ó�� ����� �ִ� - 256 �Ʒ� �ڵ�
	template<typename U> 
	typename enable_if< is_same<
		typename decay<U>::type, 
		Object>::value >::type
	setObject(U&& o)
	{
		// ������ �´°��� ?
	//	obj = o; // 1
	//	obj = std::move(o); // 2
		obj = std::forward<U>(o); // 3
	}
};
// modern C++ design => int2type �� ���� ����� å
int main()
{
	Data d1;
	Object o1;

	//d1.setObject(3.4);

	d1.setObject(o1);	// 3�� :���� 1ȸ
						// 4�� :���� 1ȸ, move1ȸ
	d1.setObject(move(o1));// Move 1ȸ
						   // Move 2ȸ

	vector<int> v;
	v.push_back(10); 
	v.push_back(move(10));

}







