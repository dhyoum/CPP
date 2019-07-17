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

//-----------------
// tuple���� N��° ����� Ÿ�Ա��ϴ� ���

template<int N, typename TP> 
struct xtuple_element_type
{
	// Ʃ�� TP���� N��° ����� Ÿ���� ?
	// ���Ҽ� ����. ���Ҽ� �ְ� �κ� Ư��ȭ �Ѵ�.
	// typedef ? type;
};

/*
// N==0���� �κ� Ư��ȭ
template<typename TP>
struct xtuple_element_type<0, TP>
{
	// ���� 0��° Ÿ���� ���Ҽ� ����.
	// typedef ? type;
};
*/
// N==0, �׸��� tuple ����� ���� �ڼ���
template<typename T, typename ... Types>
struct xtuple_element_type<0, xtuple<T, Types...>>
{
	 typedef T type;
	 typedef xtuple<T, Types...> tupleType;
};
// N != 0 �϶�
template<int N, typename T, typename ... Types>
struct xtuple_element_type<N, xtuple<T, Types...>>
{
	typedef typename xtuple_element_type<N-1, xtuple<Types...>>::type  type;

	typedef typename 
	xtuple_element_type<N - 1, xtuple<Types...>>::tupleType 
		tupleType;
};



template<typename T> void foo(T& tp)  
{
	// T�� ������ ������ ���� xtuple �Դϴ�.
	
	// T: xtuple<int, double, short> 

	typename xtuple_element_type<2, T>::type n;      // 1��° ��� Ÿ��
	
	typename xtuple_element_type<2, T>::tupleType t; // 1��° ��Ҹ� �����ϴ� tupleŸ��

	cout << typeid(n).name() << endl;
	cout << typeid(t).name() << endl;
}

int main()
{
	xtuple<int, double, short> t3(3, 3.4, 5);
	
	foo(t3);
}









