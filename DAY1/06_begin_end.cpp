#include <iostream>
#include <vector>
#include <list>
using namespace std;

// �ݺ��� : �����̳��� ��Ҹ� ����Ű�� ������ ���� �����ϴ� ��ü
// 165
int main()
{
//	vector<int> v = { 1,2,3,4,5 };
//	list<int> v = { 1,2,3,4,5 };
	int v[5] = { 1,2,3,4,5 };

//	auto p1 = v.begin();
//	auto p2 = v.end();

	// C++ 98 ��Ÿ�� : ��� �Լ� begin
	// C++ 11 ��Ÿ�� : �Ϲ� �Լ� begin/end ��� 
	auto p1 = begin(v);
	auto p2 = end(v);

	
}


