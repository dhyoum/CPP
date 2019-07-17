// 2_rvalue2.cpp
// rvalue�� ���� ���� - 238

int main()
{
	int n = 10;

	// ��Ģ 1. non const lvalue reference�� lvalue �� �����Ҽ� �ִ�.
	int& r1 = n; // ok
	int& r2 = 10;// error

	// ��Ģ 2. const lvalue reference�´� lvalue �� rvalue ��� �����Ҽ� �ִ�.
	const int& r3 = n; // ok
	const int& r4 = 10;// ok

	// ��Ģ 3. rvalue reference�� rvalue�� ����ų��
	//		  �ִ�
	int&& r5 = n; // error
	int&& r6 = 10;// ok

	//Point&& r = Point(0, 0);
}






