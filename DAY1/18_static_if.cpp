#include <iostream>
#include <type_traits>
using namespace std;

template<typename T> void printv(T a)
{
	if constexpr (T �� �����Ͷ��) // true
		cout << a << " : " << *a << endl;
	else
		cout << a << endl;
}
int main()
{
	int n = 10;
	printv(&n);
	printv(n);

}