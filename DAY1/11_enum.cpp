#include <iostream>
using namespace std;
// 181 page
// C, C++98�� enum : unscoped enum �̶�� �θ���.
// ���� enum ������
// 1. COLOR ��� �̸����� ��밡��
// 2. ������ int Ÿ��.
//enum COLOR { red = 1, blue = 2 };

// C++11 ���ο� enum
// ���� �ݵ�� COLOR�̸��� �ʿ� �ϴ�.
//enum class COLOR { red = 1, blue = 2 };
enum class COLOR : char { red = 1, blue = 2 };

int main()
{
	COLOR c = COLOR::red; // ok
	int n1 = COLOR::red; // error
	int n2 = red; // error
	int red = 3;

	cout << red << endl; // 1 ? 3
}







