
// Step 1. �⺻ ���. 126 page

// �������� Ŭ���� ���ø�
template<typename ... T> class tuple {};


// �������� �Լ� ���ø�
template<typename ... Types> 
void foo(Types ... args) {}

int main()
{
	tuple<> t0;
	tuple<int, double, char> t;

	foo(10, "AA", 4.5); // Types : int, const char*, double
						// args : 10, "AA", 4.5
	// foo(int, const char*, double)�� �Լ��� ����
}

