#include <iostream>
using namespace std;

int main()
{
	// nullary lambda
	auto f1 = [](int a) {return a * a; }; // ���ڰ� �Ѱ��ΰ��

	auto f2 = []() {return 0; };
	auto f3 = [] {return 0; }; // ���ڰ� ������() ��������


	// �������ڴ� auto���� - ������ �����ϱ��..
	// ()�����ڸ� ���ø�����
	auto f4 = [](auto a, auto b) { return a + b; };
	cout << f4(1, 2.5) << endl;

	class ClosureType
	{
	public:
		template<typename T1, typename T2>
		inline decltype(auto) operator()(T1 a, T2 b) const
		{
			return a + b;
		}
	};
}
//void foo(auto a) {} // error. �Լ� ���ڷ� auto �ȵ�.
