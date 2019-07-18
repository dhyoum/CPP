// 07_����ǥ����12
#include <iostream>
using namespace std;

class ClosureType
{
	int v1;
public:
	int operator()(int a, int b) const
	{
		return v1 + a + b;
	}
	// �Լ������ͷ��� ��ȯ ������ ������ �Լ�
	static int helper(int a, int b) 
	{
		return v1 + a + b;
	}
	using FP = int(*)(int, int);

	// ��ȯ �����ڴ� ��ȯ Ÿ���� ǥ������ �ʽ��ϴ�
	operator FP()
	{
		return &ClosureType::helper;
	}
};
int main()
{
	int(*f)(int, int) = ClosureType();

	// �ٽ� : ĸ�� ���� ���� ����ǥ���ĸ� 
	//       �Լ� �����ͷ� ��ȯ �����մϴ�.
	int v1 = 0;
	int(*f2)(int,int) = [](int a,int b){return v1+ a + b;};
			// class ClosureType{...}; ClosureType();



//	Point pt;
//	int n = pt; // pt.operator int()
//	�Լ������� p = pt; // pt.operator �Լ�������()
}