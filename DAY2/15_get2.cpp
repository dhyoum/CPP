#include <iostream>
using namespace std;

template<typename ... Types> struct xtuple 
{
	static constexpr int N = 0;
};

template<typename T, typename ... Types> struct xtuple<T, Types...> : public xtuple<Types...>
{
	typedef xtuple<Types...> baseType;
	T value;
	xtuple() {}
	xtuple(const T& a, const Types& ... args) : value(a), baseType(args...) {}
	static constexpr int N = baseType::N + 1;
};


int main()
{
	// xtuple< short>
	// xtuple< double, short>
	xtuple<int, double, short> t3(3, 3.4, 5);

	cout << t3.value << endl; // 3
	// t3 �ȿ� �ִ� 3.4, 5 ������ �غ�����..

	cout << 
		static_cast<xtuple<double, short>&>(t3).value << endl; // 3

	cout <<
		static_cast<xtuple<short>&>(t3).value << endl; // 3

	// xget�� ����� ���ô�
	double d = xget<1>(t3);
}

template<int N, typename TP>
Ʃ�� TP�� ���� N���� ����� Ÿ��&
xget(TP& tp)
{
	return static_cast<N��°���Ŭ����Ÿ��&>(tp).value;
}









