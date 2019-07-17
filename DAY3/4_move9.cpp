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
Object foo() 
{
	Object o; 
	return o; 
}
// move �����
/*
template<typename T> T&& xmove(T& arg)
{
	return static_cast<T&&>(arg);
}
*/
// T& : lvalue �� �ްڴٴ� �ǵ�
// T&&: lvalue �� rvalue�� ��� �ްڴٴ� �ǵ�
template<typename T>
remove_reference_t<T>&& xmove(T&& arg)
{
	// xmove(d1) : d1�� lvalue, T : Object&
	//			 => T&& : Object& && => Object&
	//return static_cast<T&&>(arg);

	// T�� ���� ���۷����� �����ϰ� && ���δ�.
	return
		static_cast<remove_reference_t<T>&&>(arg);
}

int main()
{
	Object d1;
	Object d2 = d1;		// ����
	Object d3 = xmove(d1); // move
	cout << "-------" << endl;
	Object d4 = move(foo()); // move
}




