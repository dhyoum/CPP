// 193 page
class Base
{
public:
	virtual void foo(int) {}
	virtual void goo() const {}
	virtual void hoo() {}
	void koo() {}
};

class Derived : public Base
{
public:
	// override : �����Ϸ����� �����Լ��� �������ϰ�
	//		�ִٰ� �˷� �ִ� ��.
	// ��� Ŭ������ �Լ��� �ٸ� ��� ���� �߻�
	virtual void foo(double)  {}
	virtual void goo() override {}
	virtual void hooo()override {}
	void koo()override {}
};
int main()
{

}