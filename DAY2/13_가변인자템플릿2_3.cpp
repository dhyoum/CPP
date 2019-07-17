#include <tuple>
using namespace std;

template<typename ... Types>
void foo(Types ... args)
{
	// args �ȿ� �ִ� ��Ҹ� ������ ���

	// args���� 2��° ���� �˰� �ʹ� - �̷��� ����
	//			�����Ҽ� ����!!
	// ��� 1. pack expansion
	int arr[] = { args... };

	// Ÿ���� �ٸ��� tuple
	tuple<Types...> t3(args...);
}

int main()
{
	foo(1, 2, 3);
}
