#include <iostream>
#include <initializer_list>
using namespace std;

// 211 page
// initializer_list :  �ʱ�ȭ �ÿ�����ϱ� ����
//			C++11���� �߰��� ����
void foo(initializer_list<int> e)
{	
}

int main()
{
	initializer_list<int> e = { 1,2,3 }; 

	foo(e);
	foo({ 1,2,3,4,5,6 });

	//e.
}