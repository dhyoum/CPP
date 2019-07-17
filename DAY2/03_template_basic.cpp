/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/
// ������ �ڵ尡 �ݺ��Ǹ�
// �Լ��� ������ ���� �Լ��� ����� Ʋ�� ������
template<typename T> // ���ø� �Ķ����
T square(T a)        // ȣ�� �Ķ����
{
	return a * a;
}

int main()
{
	square<int>(3);
	square<double>(3.3);
	
	printf("%p\n", &square); // error
	printf("%p\n", &square<int>); // ok.
	// square : �Լ��� ����� Ʋ(���ø�)
	// square<int> : �Լ�

	square(3);
	square(3.3);

}





