// cafe.naver.com/cppmaster ����
// 2���� ���� �ҽ� �����ø� �˴ϴ�.
// �� ������ Ǯ�� VC++���� ���� �ּ���.











#include <iostream>
using namespace std;
// 222 page

//int square(int n)
// C++11 ���� ���� ���ο� �Լ� ǥ���
// ���� ��ȯ Ÿ��(suffix return type)
// "����ǥ����" �� "���ø�"���� �ַ� ���
auto square(int n) -> int
{
	return n * n;
}

int main()
{
	square(3);
}
