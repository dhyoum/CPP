
// �⼮ üũ ���ּ���
// cafe.naver.com/cppmaster ����
// 4���� ���� �ҽ� �����ø� �˴ϴ�.













template<typename T> class Test
{
public:
	// �Ʒ� �Լ��� ���ڴ� forwarding reference �ϱ�� ?
	// �Ʒ� �Լ��� �Լ� ���ø��� �ƴմϴ�. �Ϲ��Լ� �Դϴ�.
	// Ŭ���� ���ø��� �Ϲ��Լ�
	void foo(T&& arg) {}

	// �Ʒ� ó���ؾ��� forwarding reference �Դϴ�.
	template<typename U> void goo(U&& arg) {}

	// github.com/webkit
	// source/wtf/wtf/scope.h
};
int main()
{
	Test<int> t;

	int n = 0;
	t.foo(n);
	t.foo(0);
}

