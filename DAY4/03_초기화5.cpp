class Vector
{
public:
	// explicit : ���� �ʱ�ȭ�� ����������
	//			���� �ʱ�ȭ�� ����Ҽ� ����.
	explicit Vector(int sz) {}
};

void foo(Vector v) {} // Vector v = 10

int main()
{
	// direct initialization
	Vector v1(10);
	Vector v2{ 10 };

	// copy initialization
	Vector v3 = 10;
	Vector v4 = (10);
	Vector v5 = { 10 };

	foo(v1);
	foo(10);

}





