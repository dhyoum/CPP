// 203 page ~
// C++98/03 �ʱ�ȭ�� ������.
struct Point 
{
	int x, y; 
};
class Complex
{
	int re, im;
public:
	Complex(int a, int b) : re(a), im(b) {}
};

int main()
{	
	// 1. ��ü�� ������ ���� �ʱ�ȭ ����� �ٸ���.
	int n1 = 0;
	int n2(0);
	int x[3] = { 1,2,3 };
	Point   p = { 1,1 };
	Complex c(1, 1);

	// 2. STL�� �����̳ʸ� ȿ�������� �ʱ�ȭ �ϱ� ��ƴ�.
	vector<int> v; // 1~10���� �ʱ�ȭ �� vector �����
	
}

// 3. Ŭ���� ����� �ִ� �迭�� �ʱ�ȭ �Ҽ� ����.
class A
{
public:
	int x[10]; // ??? �ʱ�ȭ �Ҽ� ������ ?
};





