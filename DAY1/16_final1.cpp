// 196 page
class Base
{
public:
	virtual void foo() {}
	virtual void goo() {}
};
class Derived : public Base
{
public:
	// �����Լ��ڿ� final : ���̻� ������ �Ҽ� ����
	//					�ش޶�� �ǹ�.
	virtual void foo() override final {}
	virtual void goo() override {}
};
// Ŭ���� ����� �̸��ڿ� final : ���̻� �Ļ�Ŭ����
//				����� ����.
class Derived2 final : public Derived
{
public:
	virtual void foo() override {} // error
	virtual void goo() override {} // ok
};

int main()
{

}