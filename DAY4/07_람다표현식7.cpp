#include <iostream>
using namespace std;

int g = 0;

int main()
{
	int v1 = 10;
	int v2 = 10;

	auto f1 = [](int a) { return a + g; };// �������� ���
										  // ok

	//auto f2 = [](int a) { return a + v1 + v2; };// �������� ��� 
										// error

	// ���������� ����Ϸ��� ĸ�� �ؾ� �Ѵ�. ok.
	auto f2 = [v1, v2](int a) { return a + v1 + v2; };

	// error. ĸ�ĵ� ������ �����Ҽ� ����.
	//auto f3 = [v1, v2](int a) { v1 = 20;  return a + v1 + v2; };

	// mutable ���� : () ������ �Լ��� ���� �Լ��� 
	//				�ش޶�.
	auto f3 = [v1, v2](int a) mutable { v1 = 20;  return a + v1 + v2; };

	f3(0);

	cout << sizeof(f3) << endl; // ????

	cout << v1 << endl; // 10


	/*
	// �� ������ ������ �Ʒ��� �����ϴ�.
	class ClosureType
	{
		int v1;
		int v2;
	public:
		ClosureType(int a, int b) : v1(a), v2(b) {}

		inline bool operator()(int a)  const
		{
			v1 = 20;  
			return a + v1 + v2;
		}
	};
	auto f3 = ClosureType(v1, v2); // �������� v1, v2
	*/
}








