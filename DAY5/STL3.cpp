#include <set>
#include <functional>
#include <algorithm>
#include <iostream>
using namespace std;

// �ٽ� 4. ���� ���� ������

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
		return a > b;
	}
};
int main()
{
	set<int, Greater> s;   // RB Tree
	s.insert(15);
	s.insert(20);
	s.insert(10);

	for (auto&& n : s) cout << n << ", ";
}







