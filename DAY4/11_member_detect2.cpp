#include <iostream>
#include <type_traits>
using namespace std;

int main()
{
	// r1, r2�� ���� �մϴ�.
	int&& r1 = 0;
	add_rvalue_reference<int>::type r2 = 0;


	void&& r3; // �����Ͽ���. void ������ ����� �����ϴ� 

	add_rvalue_reference<void>::type r4; 
					// void r4�� �ǹ�.
}
