#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v = { 1,2,3,4,5 };

	// �������� for ��
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}

	// C++11 ���ο� for �� - range for
	for (int n : v)
		cout << n << endl;

	// ���ڵ�� ���� �����Ϸ��� �Ʒ� �ڵ带 �����մϴ�.
	// 171 page
	for (auto p = begin(v); p != end(v); ++p)
	{
		int n = *p;
		//-----------------
		cout << n << endl;
	}

}




