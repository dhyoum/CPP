#include <set>
#include <functional>
#include <algorithm>
#include <iostream>
using namespace std;

// �ٽ� 5. Equality vs Equivalency

/*
template<typename T,
		 typename Pred = less<T>, // ��� ��
		 typename Ax = allocator<T>> //�޸��Ҵ��
class set
{
	Pred pred; // ��� �񱳸� ���� ��å Ŭ����
public:
	pair<...> insert(const T& newElem)
	{
		//if (rootElem < newElem)
		if ( pred(rootElem, newElem) )
			add ������;

		//else if (newElem < rootElem)
		else if (pred(newElem, rootElem) )
			add ����;
		else
			�̹������Ѵ�. ���� ��ȯ
	}
};
*/

// set�� ��å Ŭ���� ������ "���� �Լ���ü"�Դϴ�.
struct Greater
{
	bool operator()(int a, int b) const
	{
		return (a  / 10) > (b / 10);
	}
};
int main()
{
	set<int, Greater> s;   // RB Tree
	s.insert(15);
	s.insert(20);
	s.insert(35);
	s.insert(45);

	// �Ʒ� 2���� ������ ������
	// ���� �˻� - Tree�� Ư¡�� Ȱ�� ����
	// "==" �� "����"�� �Ǵ�
	auto p1 = find(s.begin(), s.end(), 32);

	if (p1 == s.end())
		cout << "�˻� ����" << endl;

	// ���� �˻� - Tree�� Ư¡�� Ȱ��
	// "������ �Լ���ü"�� ������ �Ǵ�
	auto p2 = s.find(32);

	if (p2 == s.end())
		cout << "�˻� ����" << endl;
	else
		cout << "���� : " << *p2 << endl; // 35



	for (auto&& n : s) cout << n << ", ";
}







