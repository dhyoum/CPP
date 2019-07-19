#include <iostream>
using namespace std;

template<typename T> class NamedType
{
	T value;
public:
	NamedType(const T& v) : value(v) {}
	T& get() { return value; }
};
using Width  = NamedType<int>;
using Height = NamedType<int>;

int main()
{
	Width  w = 10;
	Height h = 10;
	// ����. widht�� height �� ���� Ÿ���̴�. 
	// �ٸ� Ÿ���� �ǰ� �غ���.
	w = h;
	cout << w.get() << endl;
}

