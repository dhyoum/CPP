// 7_reference_wrapper
#include <iostream>
#include <functional>
using namespace std;

void foo(int& a) { a = 100; }

// �Ʒ� �Լ��� bind ó�� ���ڸ� ������ �ް� �ֽ��ϴ�.
template<typename F, typename T> 
void valueForwarding(F f, T arg) 
{
	f(arg);
}

// reference_wrapper�� ����� �����Լ�
template<typename T>
reference_wrapper<T> xref(T& obj)
{
	return reference_wrappr(obj);
}


int main()
{
	int x = 0;

	//ValueForwarding(&foo, x); // ���纻�̹Ƿ� �ȵ�

	// �޸� ������ ������ ���� �ּҸ� ������ ���?
	// ValueForwarding�� 2��° ���ڰ� ������ �ε�
	// ������ ��ȯ �ɼ� ��� ����
	//ValueForwarding(&foo, &x); 

//	reference_wrapper<int> r = x;
//	valueForwarding(&foo, r);

//	valueForwarding(&foo, reference_wrapper<int>(x));

	valueForwarding(&foo, xref(x));

	std::cout << x << std::endl;
}





