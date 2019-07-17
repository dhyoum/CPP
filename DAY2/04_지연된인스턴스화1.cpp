// lazy instantiation
/*
class A
{
	int data;
public:
	void foo(int a) { *a = 0; } // error
};
*/
// �ν��Ͻ�ȭ : ���ø����� ���� C++ �ڵ�(�Լ�/Ŭ����)
//			   �� �����Ǵ� ��
// ������ �ν��Ͻ�ȭ : ���� �Լ��� ���� C++ �ڵ��
//				�����˴ϴ�.
template<typename T>
class A
{
	T data;
public:
	void foo(T a) { *a = 0; } // error
};

int main()
{
	A<int> a;
	a.foo(0);
}



