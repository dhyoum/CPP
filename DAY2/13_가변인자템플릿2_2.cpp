#include <iostream>
using namespace std;

// 130 page �Ʒ� �ڵ�
template<typename T> void print(T a)
{
	cout << a << endl;
}

template<typename ... Types>
void foo(Types ... args)
{
	//print(args...); // error
	//print(args)...;// print(E1), print(E2), 
					// print(E3)

	// pack �� �Լ�����, �迭 �ʱ�ȭ �����
	// Ȯ�� ����
	//args...; // error
	int x[] = { args... }; //ok

	int dummy[] = { 0, (print(args), 0)... };
			// { (print(1), 0), print(2), print(3)}
}
   
int main()
{
	foo();
	foo(1, 2, 3);
}
