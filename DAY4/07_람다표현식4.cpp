#include <iostream>
#include <functional>
using namespace std;

// ����ǥ������ ��� ���� - 292


int main()
{
	auto f1           = [](int a, int b) { return a + b; };
	
	int(*f2)(int,int) = [](int a, int b) { return a + b; };
	
	function<int(int,int)> f3 = [](int a, int b) { return a + b; };



	// �Ʒ� �ڵ���� �ζ��� ġȯ���� ������ ������
	f1(1, 2); //  �ζ��� ġȯ ��.
			// ġȯ �Ǵ� ����..
			// f1�� ���� �ּҰ� �ƴ� f1�� Ÿ�� ����� ȣ��
		    // f1.operator()(1,2) �� ����

	f2(1, 2); //  ġȯ �ȵ�.
				// f2�� ���� �ּ� ��� ȣ��
				// ����� �޸𸮿��� �� ������

	f3(1, 2); //  ġȯ �ȵ�.
}








