// 116 page
template<bool b, typename T = void>
struct enable_if
{
	typedef T type;
};
// ����! �κ� Ư��ȭ �ÿ��� ����Ʈ���� ǥ������ �ʽ��ϴ�.
// ������ primary�� ������ ����˴ϴ�.
template<typename T>
struct enable_if<false, T>
{
};
int main()
{
	// �Ʒ� �������� Ÿ���� ������ ������
	enable_if<true, int>::type n1;   // int 
	enable_if<true, double>::type n2;// double
	enable_if<true>::type n3;        // void
				// void Ÿ���� ������ ����� �����Ƿ� error
	
	enable_if<false, int>::type n4; // error.
						// type �� ����.!
}




