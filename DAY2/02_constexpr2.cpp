#include <iostream>
using namespace std;

// ������ �ð� ����� vs ����ð� ���

int main()
{
	int s1 = 10;
	int a1[s1]; // C89 ���� : �迭�� ũ��� �������Ҷ� 
				//           �˾ƾ� �Ѵ�.
                // C99 ���� : �迭�� ũ��� ������ ����
				//			g++����, vc++���� ����

	const int s2 = 10;
	int a2[s2]; // ok

	const int s3 = s1;
	int a3[s3]; // error
}

void foo(const int s)
{
	int ar[s]; // error
}

//foo(n);

