#include <iostream>
using namespace std;

// 120p. �߻� Ŭ�������� �����ϴ� ���
class Shape
{
public:
	//virtual void Draw() = 0;
};

// �߻� Ŭ������ �迭�� ����Ű�� �����͸� ����� 
// �����ϴ�.
template<typename T> int  check( T(*a)[1] );
template<typename T> char check(...);

template<typename T> struct xis_abstract
{
	static constexpr bool value =
		(sizeof(check<T>(0)) == 1);
};

int main()
{
	cout << xis_abstract<Shape>::value << endl;


//	int n = sizeof(check<Shape>(0));
//	cout << n << endl; // 1
}
