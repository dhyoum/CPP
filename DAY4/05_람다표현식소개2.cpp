#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool foo(int n) { return n % 3 == 0; }

int main()
{
	vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// 3�˻�
	auto p1 = find(v.begin(), v.end(), 3);

	// ù��° ������ 3�� ����� ã�� �ʹ�.
	auto p2 = find_if(v.begin(), v.end(), foo);


	// ����ǥ������ �ֵ� �뵵
	// �˰��� �Լ��� ������ �Լ��� �����ϴ� ��찡
	// ���� ����.
	auto p3 = find_if(v.begin(), v.end(),
		  [](int n) {return n % 3 == 0;	}	);

}


