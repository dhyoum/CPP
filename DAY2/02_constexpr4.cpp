// constexpr�� Ȱ��
// 1. constexpr ��� �����
// 2. constexpr �Լ� �����
// 3. constexpr if ����� - 200page. "���ø����� ���"

// constexpr �Լ� : �Լ� ���ڰ� ������ �ð��� �˼� �ִ�
//		���̸� �Լ� ���� ��ü�� ������ �ð��� ����
constexpr int Add(int a, int b)
{
	return a + b;
}
// cppreference.com �� �ͺ�����.
// find �˻��غ�����
int main()
{
	int a = 1, b = 2;
	int x1[ Add(1, 2) ]; // ok

	int x2[Add(a, b)]; // error. �迭�� ũ��� 
						// ����� �����Ҽ� ����.
	int c = Add(a, b); // ok
}