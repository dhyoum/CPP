int main()
{
	// 294 page
	// 1. ��Ȯ�� ���.
	auto f1 = [](int a, int b) -> int { return a + b; };




	// 2. ���Ϲ����� �ϳ���� ���� ����.
	auto f2 = [](int a, int b) { return a + b; };


	// 3. ���� ������ 2���̻��� ��� - ���� Ÿ���̸� ��������
	auto f3 = [](int a, int b) { if (a == 1) 
						return a; else return b; };



	// 4. �ٸ� Ÿ���ϰ�� - �ݵ�� ���� Ÿ���� ǥ���ؾ� �Ѵ�.
	auto f4 = [](int a, double b)  -> double { if (a == 1)
					return a; else return b; };
}







