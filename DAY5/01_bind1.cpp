// �⼮ (QR) üũ ���ּ���
// cafe.naver.com/cppmaster ����5���� ���� �ҽ� �����ø� �˴ϴ�.
#include <iostream>
#include <functional> // bind
using namespace std::placeholders; // _1, _2, _3..

void foo(int a, int b, int c, int d)
{
	printf("%d, %d, %d, %d\n", a, b, c, d);
}
int main()
{
	foo(1, 2, 3, 4); // 4�� �Լ�

	// bind : N �� �Լ��� Ư�� ���ڸ� ������ ���ο�
	//		 �Լ� ����
	// 4�� => ���� �Լ�
	bind(&foo, 5, 3, _1, 2)(7); // 5 3 7 2

	bind(&foo, 5,_2,6,_1)(3, 8); // 5, 8, 6, 3 ������
					      // ? ä�� ������

}



