// decltype ��Ģ - 220 page

int main()
{
	int n = 10;
	int& r = n;
	const int c = 10;
	int* p = &n;

	// ��Ģ 1. () �ȿ� �ɺ��� �̸��� �ִ� ���
	//        �ش� �ɺ��� ����� ������ ������ Ÿ��
	decltype(n)  d1; // int
	decltype(r)  d2; // int&     �ʱⰪ ������error
	decltype(c)  d3; // const int   ""
	decltype(p)  d4; // int* 

	// ��Ģ 2. �����̸��� �����ڵ��� ������ ǥ������
	//        �ִ� ���
	// ǥ������ ���ʿ� �ü� ������ : ����Ÿ��
	// ǥ������ ���ʿ� �ü� ������ : �� Ÿ��
	// ������ "rvalue ��ﶧ ����"

	decltype(*p) d5; // int&

	int x[3] = { 1,2,3 };

	decltype(x[0]) d6;  // int&

	decltype(n + n) d7; // (n+n) = 10  error�̹Ƿ�
						// int

	decltype(++n) d8;   // int&

	decltype(n++) d9;   // int

	decltype(n = 20) d10; // (n = 20) = 10; ok
						// int&


	int y[3] = { 1,2,3 };

	// d�� a�� Ÿ���� ?
	decltype( y[0] ) d;  // int& 
	
	auto a = y[0]; // y[0]�� ���� ���� Ÿ���ε�
				   // auto�� ������ �����ϹǷ�
				   // a�� int


//	int k = 3;
//	int s = ++k * ++k;
//	++k = 20; // ok
//	cout << s << endl; // 25
}





// cafe.naver.com/cppmaster ���� ���� �ҽ�
// �����Ǽ� �ֽ��ϴ�.