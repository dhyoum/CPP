int main()
{
	int v = 100;
	auto f = [](int a, int b) { return a + b; };
				// class xxx{...}; xxx();

	decltype(f) f1; // error. ClosureType����
					// ����Ʈ �����ڰ� ����.

	decltype(f) f2(f); // ok.. 
						// ���� �����ڴ� �ִ�

	// cppreference.com �� �ͺ�����.
}