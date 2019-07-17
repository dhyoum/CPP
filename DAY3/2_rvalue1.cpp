#include <iostream>
//#include "cppmaster.h"
using namespace std;

#define LOG_VALUE_CATEGORY(...)												\
	if(is_lvalue_reference<decltype((__VA_ARGS__))>::value)					\
		printf(  #__VA_ARGS__ " : lvalue\n" );							\
	else if (is_rvalue_reference<decltype((__VA_ARGS__))>::value)			\
		printf(  #__VA_ARGS__ " : rvalue(xvalue)\n" );		\
	else																	\
		printf(  #__VA_ARGS__ " : rvalue(prvalue)\n" );



// value ������ ������ �ƴ� ǥ���Ŀ� �ο��Ǵ�
// �����Դϴ�. 237page
int main()
{
	int n = 0;
	n = 10;      // ok. n�� lvalue
	//n + 1 = 20;  // error. n+1 �� rvalue

	++n = 20; // ok. ++n�� lvalue
	//n++ = 20; // error. n++ �� rvalue

	LOG_VALUE_CATEGORY(n);   // cppmaster.h��
	LOG_VALUE_CATEGORY(++n); // �ִ� ��ũ�� �Լ�
	LOG_VALUE_CATEGORY(n++);

	const int c = 0;
	LOG_VALUE_CATEGORY(c);
}





