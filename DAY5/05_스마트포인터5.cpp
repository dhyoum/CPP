#include <iostream>
#include <memory>
using namespace std;

void foo(void* p) { free(p); }

int main()
{
	// ������ ����
	shared_ptr<int>  sp1(new int);

	// �������� 2��° ���ڷ� ������ �Լ� ����
	//shared_ptr<void> sp2(malloc(100), foo);

	//shared_ptr<void> sp2(malloc(100), free);

	shared_ptr<void> sp2(malloc(100),
						[](void*p) { free(p); });


//	shared_ptr<int> sp3(new int[10], 
//					[](int *p) { delete[] p; });

	// �迭 �Ҵ��� ��� - C++17 ���� �Ʒ�ó�� ��밡��
	shared_ptr<int[]> sp4(new int[10]);
}









