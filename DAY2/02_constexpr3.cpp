
// �ٸ� ���Ͽ� �ִ� ���� �����ϱ�
extern const int c;

int main()
{
	int n = 10;
	const int c1 = n; // ok
	const int c2 = 10;// ok

	// C++11 �� ���ο� ��� ����� Ű����
	// ������ �ð� ����� ����� �ִ�.
	constexpr int c1 = n; // error
	constexpr int c2 = 10;// ok

}