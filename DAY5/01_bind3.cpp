#include <iostream>
#include <functional>
using namespace std::placeholders;
using namespace std;

void foo(int a, int& b) { b = 100; }

int main()
{
	function<void(int)> f;

	int n = 0;
	// �Ʒ� �ڵ�� n�� ������ ���� �մϴ�.
	//f = bind(&foo, _1, n); // �̼��� n�� ������ ����?
							// �ƴϸ� n�� ���� ����

	f = bind(&foo, _1, ref(n)); // n�� ������ ����

	f(0); // foo(0, n)

	cout << n << endl; // �� ���ñ�� ? 0 ? 100
}




