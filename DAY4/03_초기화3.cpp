// braced-init-list
// direct vs copy

// 205 page

struct Point { int x, y; };

class Complex
{
	int re, im;
public:
	Complex(int a, int b) : re(a), im(b) {}
};

int main()
{
	/*
	int n1 = 0;
	int n2(0);
	int x[3] = { 1,2,3 };
	Point   p = { 1,1 };
	Complex c(1, 1);
	*/

	// �ϰ��� �ʱ�ȭ ( uniform initialization )
	// �߰�ȣ �ʱ�ȭ(brace init )
	// direct initialization
	int n1{ 0 };
	int n2{ 0 };
	int x[3]{ 1,2,3 };
	Point   p{ 1,1 };
	Complex c{ 1, 1 };

	// copy initialization
	int n1 = { 0 };
	int n2 = { 0 };
	int x[3] = { 1,2,3 };
	Point   p = { 1,1 };
	Complex c = { 1, 1 };

	// 205 �߰�
	int n3 = 3.4; // ok
	int n4 = { 3.4 }; // error

	char c = { 300 }; // error
}





