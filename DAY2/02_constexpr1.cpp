#include <iostream>
using namespace std;
// ���翡 ���� �����ε�.. 200 page�� �������� �ֽ��ϴ�.

// ������ �ð� ����� vs ����ð� ���

int main()
{
	//const int c = 10; // ������ �ð� ���

	int n = 10;
	const int c = n; // ����ð� ���

//	int* p = &c; // error. ��� �ּҸ� 
				// ������ ����Ű�� �����Ϳ� ������ ����.

//	int* p = static_cast<int*>(&c); // error
	int* p = const_cast<int*>(&c); // ok
					// ������� �����ϴ� ĳ����
	*p = 20;

	cout << c  << endl; // 10  20
	cout << *p << endl; // 20  20
}

