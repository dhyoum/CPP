#include <iostream>
using namespace std;
// �ٽ� : ���ø��� ���������� Ÿ���� ��������
//       typename�� �ٿ��� �Ѵ�.

T::DWORD : DWORD ������ �ؼ�
typename T::DWORD : DWORD Ÿ������ �ؼ�

typename AAA::DWORD : typename�� �����ʿ� ����.
					AAA��� Ÿ�� �̸��� ����ϹǷ�



class AAA
{
public:
	enum { value = 10};
	typedef int DWORD;
};
int p = 0;

template<typename T> void foo(T a)
{
	// �����Ϸ��� �Ʒ� �ڵ带 ��� �ؼ��ؾ� �ұ�� ?
//	T::DWORD * p;      // DWORD�� �������ؼ��Ѵ�.
	typename T::DWORD* p; // DWORD�� Ÿ������ �ؼ�
						  // �� �޶�

}

int main()
{
	AAA aaa;
	foo(aaa);
}


