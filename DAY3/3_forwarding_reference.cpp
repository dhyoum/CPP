// 242 page :���� �߿��մϴ�. �ݵ�� �����ؾ��մϴ�.

// �Լ����ڷ�
// int&  : int Ÿ���� lvalue �� ���� ����

// int&& : int Ÿ���� rvalue �� ���� ����

// T&    : ������ Ÿ���� lvalue �� ���� ����

// T&&   : ������ Ÿ���� lvalue�� rvalue �� 
//		   ��� ���ް���
//         "forwarding reference"
// �ǹ� : ��� ���� ������ �ִµ�
// int lvalue �� ������  T : int&  �����Լ� f4(int&)
// int rvalue �� ������  T : int   �����Լ� f4(int&&)


void f1(int&  a) {}
void f2(int&& a) {}


template<typename T>
void f3(T& t) {}

int main()
{
	int n = 0;

	// 1. ����ڰ� Ÿ���� ��������� �����ϴ� ���
	f3<int>(n);  // T : int  T& : int&  f3(int&)
	f3<int&>(n); // T : int& T& : int& &  f3(int&)
	f3<int&&>(n);// T: int&&  T&:int&& & f3(int&)

	// 2. ����ڰ� Ÿ���� �������� ���� ���
	// �����Ϸ��� �ִ��� ����ؼ� �Լ��� ������� �Ѵ�
	f3(10); // error. �Լ��� ����� ����.
	f3(n);  // T: int�� ����
	
}



template<typename T>
void f4(T&& t) {}

int main()
{
	int n = 0;

	// 1. ����ڰ� Ÿ���� �����ϴ� ���
	// �Լ����ڷ� n �Ǵ� 0�� �־����
	f4<int>(0);  // T : int   T&& : int&& f4(int&&)
	f4<int&>(n); // T : int&  T&& : int& &&  f4(int&)
	f4<int&&>(0);// T : int&& T&& : int&& &&f4(int&&)

	// 2. ����ڰ� Ÿ���� �������� ������
	// �����Ϸ��� ���ڸ� ���� �����ؾ� �Ѵ�.
	f4(n); // T : int&�� ����  T&&:int& && => f4(int&)
	f4(0); // T : int		T&&:int&&     => f4(int&&)
}