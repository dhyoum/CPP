// 3_�Ϻ���������
#include <iostream>
using namespace std;

void foo(int  n) { n = 10; }
void goo(int& n) { n = 10; }

// �Ϻ��� ����(perfect forwarding)�̶� ?
// ���� ���� ���ڸ� �ٸ� �Լ����� �Ϻ��ϰ� �����ϴ� 
// ���



// Ư�� �Լ��� ����Ǵµ� �ɸ��� �ð��� �����ϴ� �Լ�
template<typename F, typename T> 
void chronometry(F f, const T& arg)
{
	// �ð� ���
	f(arg);
	// �ɸ� �ð� ���
}
int main()
{
	int x = 0;
//	foo(10);
	chronometry(foo, 10);
	chronometry(goo, x); // goo(x)

	cout << x << endl;
}





