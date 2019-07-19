#include <iostream>
#include <functional>
using namespace std;

template<typename T> struct xreference_wrapper
{
	T* obj;
	xreference_wrapper(T& t) : obj(&t) {}
	// T& ������ �Ͻ��� ��ȯ�� ����ؾ� �Ѵ�.
	// ��ȯ ������
	operator T&() { return *obj; }
};

int main()
{
	int n1 = 10;
	int n2 = 20;
//	int& r1 = n1;
//	int& r2 = n2;
	// C++11 �̵� ������ ����
	// ���Կ���� ���� �ƴ� ������ �̵�
	xreference_wrapper<int> r1 = n1;
	xreference_wrapper<int> r2 = n2;

	int& r3 = r1; // reference_wrapper�� 
					// ��¥ �����͵� ȣȯ��.
				// r1.operator int&()

	r2 = r1; 

	std::cout << n1 << std::endl; // 10
	std::cout << n2 << std::endl; // 10
	std::cout << r1 << std::endl; // 10
	std::cout << r2 << std::endl; // 10
}



