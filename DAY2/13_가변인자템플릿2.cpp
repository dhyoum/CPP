#include <iostream>
using namespace std;

void goo(int a, double d, const char* s)
{
	cout << "goo" << endl;
}

// parameter pack, sizeof..., pack expansion
template<typename ... Types> 
void foo(Types ... args )
{
	// args : parameter pack �̶�� �մϴ�.-128p
	// Types : template paramter pack

	// sizeof...(pack �̸�)
	cout << sizeof...(args) << endl;
	cout << sizeof...(Types) << endl;

//	goo(args); // error. args�� pack �̴�.

	// pack expansion : �Ѿ��ǿ�Ҹ�  , �� ����ؼ�
	//				���� - 129
	goo(args...);  // goo(3, 4.5, "hello")
} 

int main()
{
	foo(3, 4.5, "hello");
}





