
//void foo( int(*f)(int, int) ) {} // 1. �Լ� ������
							     // ġȯ �ȵ�

//void foo( auto f ) {} // error. auto�� �Լ� ���ڰ� 
						// �ɼ� �����ϴ�.

template<typename T>
void foo(T f) {}   // ���ø�. �ζ��� ġȯ ����.

int main()
{
//	foo(1);
//	foo(3.4);
	foo( [](int a, int b) { return a + b; } );
	foo( [](int a, int b) { return a - b; } );
}