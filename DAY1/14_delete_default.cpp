// 186 page

int add(int a, int b)
{
	return a + b;
}
// �Լ��� ���� ���� : ���� ��ũ ���� �߻�
//double add(double a, double b);

// �Լ� ���� ���� : �ش� �Լ� ���� ������ ����
double add(double a, double b) = delete;

// 189 page ǥ ���صǴ��� Ȯ���� ������.

int main()
{
	add(1, 2);

	add(3.4, 2.3);
}