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
template<typename T> struct less
{
	bool operator()(const T& a, const T& b) const
	{
		return a < b;
	}
};
struct Point
{
	int x, y;
	
	bool operator <(const Point& p) const
	{
		return x < p.x;
	}
};
int main()
{
//	set<
	set<Point> s;   // RB Tree  less<Point>
	s.insert({ 1,2 });
}



// ������ ������ �տ� ������ �ֽ��ϴ�


// ã�� ������



// square.h
template<typename T> T square(T a);

// square.cpp
template<typename T> T square(T a) { return a * a; }

// ����� �ν��Ͻ�ȭ
template int square<int>(int a);
template double square<double>(double a);

// main.cpp
#include "square.h"

int main()
{
	square(3); // square<int>()
	square(3.3); // square<int>()
}





