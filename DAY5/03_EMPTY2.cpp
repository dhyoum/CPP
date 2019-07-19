#include <iostream>
using namespace std;

// new : �޸� �Ҵ� ���н� ����(std::bad_alloc) ����

void* operator new(size_t sz)
{
	// �Ʒ��� ������ ���� �Դϴ�.
	// cafe.naver.com/cppmaster C++���� new ����.
	void* p = malloc(sz);

	if (p == nullptr)
		throw std::bad_alloc();

	return p;
}

// �����ε����� ���� Ÿ���� �ʿ��Ҷ� Empty�� ���� ���
// �մϴ�.
//struct nothrow_t {};
//nothrow_t nothrow;

// ���н� 0�� ��ȯ�ϴ� ����
void* operator new(size_t sz, nothrow_t)
{
	void* p = malloc(sz);
	return p;
}
//#define nothrow 1

int main()
{
	// �Ʒ� �ڵ��� �߸��� ���� ?
	//int* p1 = new int; // ���н� ���� �߻�

	int* p1 = new(nothrow) int; // ���н� 0��ȯ
	
	if (p1 == nullptr)
	{
	}
	else
		delete p1;
}


