#include <vector>
#include <algorithm>

// STL1.cpp
namespace Video
{
	void foo() {}
	struct Card {};
	void init(Card c) {}
}
int main()
{
	Video::foo(); // Video:: �� �ݵ�� �ʿ��մϴ�.
	Video::Card c;// Video:: �� �ݵ�� �ʿ��մϴ�
	init(c);  // Video:: �� ��� �˴ϴ�.
	// Argument Dependant Lookup (ADL)
	// ���ڰ� ���Ե� �̸� ������ �ڵ� �˻� �˴ϴ�.

	std::vector<int> v(10, 3);
	find(v.begin(), v.end(), 3); // ok
					// std::  �� ��� �˴ϴ�.
}