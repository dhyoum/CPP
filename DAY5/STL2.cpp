#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

// STL �ٽ�
// 1. iterator category 5�� - EMPTY3.cpp ����
// 2. �˰����� �����̳ʸ� ���� ���Ѵ�.

// 3. �˰���(�Ϲ��Լ�)�� ���� �̸��� ��� �Լ��� �ִٸ�
//    �ݵ�� ��� �Լ��� �������.!!
//    list �� remove �˰����� �ƴ� remove����Լ����

/*
int main()
{
	vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	// remove�� �����̳��� ũ�⸦ ������ �ʽ��ϴ�.
	// ����, ������ ��ܳ��� ���� �մϴ�.
	auto p = remove(v.begin(), v.end(), 3);

	for (auto&& n : v) cout << n << ", ";

	// �ʿ���� ���� ����
	v.erase(p, v.end());

	cout << endl;
	for (auto&& n : v) cout << n << ", ";
}
*/

int main()
{
//	vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	list<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	// list�� ��� ���� �Ʒ� 3�� ó�� ���� ������
	//auto p = remove(v.begin(), v.end(), 3);
	//for (auto&& n : v) cout << n << ", ";
	//v.erase(p, v.end());

	// list�� ��� �Լ� remove�� ����ϼ���
	v.remove(3);

	cout << endl;
	for (auto&& n : v) cout << n << ", ";
}

