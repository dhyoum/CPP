#include <iostream>
using namespace std;
// goo Ÿ�� : int(char, double)
int goo(char c, double d) 
{
	return 0; 
}

// 1. primary template ����� type �ֱ�
template<typename T> struct result_type
{
	using type = T;
};
// 2. ���ϴ� Ÿ���� ������ �ֵ��� �κ� Ư��ȭ �մϴ�.
// �� �κ��� �߿�!!
template<typename R, typename A1, typename A2> 
struct result_type<R(A1, A2)>
{
	using type = R;
};

template<typename T> void foo(T& a)
{
	// �Լ� ��ȯŸ�� �����ϱ�.(��, �Լ��� ���ڰ� 2���϶���)
	// T:int(char, double)
	typename result_type<T>::type n = 0;		  // int 

	cout << typeid(n).name() << endl;
}

int main()
{
	foo(goo);
}



