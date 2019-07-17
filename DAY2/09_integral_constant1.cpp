#include <iostream>
using namespace std;


// �Ʒ� �ڵ尡 ���� �߿��� ���� �Դϴ�.
template<int N> struct int2type
{
	enum { value = N };
};


/*
int main()
{
	foo(0);
	foo(1); // 0, 1�� ���� Ÿ��
			// foo(0), foo(1)�� ���� �Լ� ȣ��

	int2type<0> t0;
	int2type<1> t1;

	foo(t0);
	foo(t1); // t0�� t1�� �ٸ� Ÿ�� �Դϴ�.
			 // foo(t0)�� foo(t1)�� �ٸ� �Լ� ȣ��
			 // 86page
}
*/


//���ۿ��� "C++ Idioms"  ù��° ��ũ

// ������ �϶��� ���
template<typename T> void printv_imp(T a, int2type<1>)
{
	cout << a << " : " << *a << endl;
}
// �����Ͱ� �ƴҶ��� ���
template<typename T> void printv_imp(T a, int2type<0>)
{
	cout << a << endl;
}

template<typename T> void printv(T a)
{
	printv_imp(a, 
		int2type<is_pointer<T>::value>() );
		// int2type<0>() 
}




int main()
{
	int    n = 10;
	printv(n);
}



