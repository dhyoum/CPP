#include <iostream>
#include <cassert> 
using namespace std;


static_assert(sizeof(void*) == 8,
					"error not 64bit");

//static_assert(sizeof(void*) == 8); // C++17

// 156 page
void foo(int age)
{
	// �Լ� ���ڴ� ����ϱ� ���� ��ȿ�� ���θ� Ȯ���ϴ� ���� ����.
	assert(age > 0);

	// C++11 ������ �ð� assert
//	static_assert(sizeof(void*) == 8,
//				"error not 64bit");
}



int main()
{
	foo(-10);
}




