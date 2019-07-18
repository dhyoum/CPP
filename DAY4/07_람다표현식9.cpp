int main()
{
	int v1, v2;

	// 298
	// = : ��� ���������� ������ ĸ��
	auto f1 = [=](int a) { return a + v1 + v2; };

	// & : ��� ���������� �������� ĸ��
	auto f2 = [&](int a) { return a + v1 + v2; };
	
	auto f3 = [v1](int a) { return a + v1 + v2; }; // v1�� ĸ��(��)
	auto f4 = [&v1](int a) { return a + v1 + v2; };// v1�� ĸ��(����)
	
	// ��� ���������� ��, v1�� ����
	auto f5 = [=, &v1](int a) { return a + v1 + v2; };

	auto f6 = [&, v1](int a) { return a + v1 + v2; };

	// error. ����Ʈ ���� �ٸ� �͸� ǥ���ؾ� �Ѵ�.
	auto f7 = [&, &v1](int a) { return a + v1 + v2; }; // 

}


