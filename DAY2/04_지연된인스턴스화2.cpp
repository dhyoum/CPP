// ���� �ڵ带 ������ �ϸ� ������ ������� ? ������� ?

template<typename T> void foo(T a)
{
	// if : ����ð� ���ǹ� �Դϴ�
	//      ������ false�� ���ø����� 
	//      C++ �ڵ�� �����˴ϴ�.
	//if (false)
	//	*a = 10;

	// if constexpr : ������ �ð� ���ǹ�
	// ������ false �ΰ�� C++ �ڵ带 �������� 
	// �ʽ��ϴ�
	// /std:c++17
	if constexpr (false)
		*a = 10;
}
int main()
{
	foo(0);
}