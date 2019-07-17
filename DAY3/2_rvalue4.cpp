typedef int& LR;
typedef int&& RR;

// 240 page
int main()
{
	int n = 10;

	LR r1 = n;	// ok
	RR r2 = 10;	// ok

	// reference collapsing �̶�� �մϴ�. && &&�� ��츸 && �̴�.
	LR& r3 = n ; // int& &   => int&
	RR& r4 = n ; // int&& &  => int&
	LR&& r5 = n ; // int& &&  => int&
	RR&& r6 = 10 ; // int&& && => int&&

	// ���� ���� ���۷����� ���۷����� ������� 
	// �����ϴ�.
	int& & r7 = n; // error

	// typedef �� ���ø������� ���˴ϴ�.
}

template<typename T> void foo(T& a) {}// int&

foo<int&>(n); // ?





