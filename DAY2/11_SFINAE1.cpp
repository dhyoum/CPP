#include <iostream>
using namespace std;

// 112 page
// SFINAE1. �����ε� resolution

//template<typename T> 
//void foo(T a)   { cout << "T" << endl;}
//void foo(int a) { cout << "int" << endl; }
//void foo(double a) { cout << "double" << endl; }
//void foo(char a)   { cout << "char" << endl; }
void foo(...  ) { cout << "..." << endl; }

int main()
{
	foo(10); // 1. exactly matching - ��Ȯ�� Ÿ��
			 //    - int
		// 2. template �� ����ؼ� foo(int)����
		// 3. standard conversion
		//		ǥ�� Ÿ�Գ����� �Ͻ��� ����ȯ
		// 4. �������� �Լ�
}


