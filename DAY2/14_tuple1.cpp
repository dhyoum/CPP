#include <iostream>
using namespace std;

// �������� ���ø��� ����� C++11 ǥ���� Ʃ�� �����..
// 145 page

// ������ : data�� �Ѱ��� �����Ѵ�.

// primary template
template<typename ... Types>
struct xtuple
{
	static constexpr int N = 0;
};
// �κ� Ư��ȭ�� ����ؼ� 1��° ���ڴ� Ÿ���� �̸���
// �˼� �ֵ��� �Ѵ�.
template<typename T, typename ... Types>
struct xtuple<T, Types...>
{
	T value;
	xtuple() = default; // ����Ʈ ������
	xtuple(const T& v) : value(v) {}
	static constexpr int N = 1;
};
int main()
{
	xtuple<short>              t1(1);
	xtuple<double, short>      t2(3.4);
	xtuple<int, double, short> t3(3);
}



