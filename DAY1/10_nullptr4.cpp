#include <iostream>
using namespace std;

void foo(int   n) { cout << "int" << endl; }
void foo(void* p) { cout << "void*" << endl; }
void goo(char* p) { cout << "char*" << endl; }

int main()
{
	foo(0); // int
	foo((void*)0); // void*

#if __cplusplus
	#define NULL 0
#else
	#define NULL (void*)0
#endif
	
	foo(NULL);

	goo(NULL); // C��� : void*=>char* �Ͻ�����ȯ ����
			   // C++���� �Ͻ��� ��ȯ �ȵ�.
}