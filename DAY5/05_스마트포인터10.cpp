#include <iostream>
#include <memory>
using namespace std;

int main()
{
	int* p = new int;

	// �Ʒ� �ڵ带 ���� ������
	shared_ptr<int> sp1(p);
	shared_ptr<int> sp2(p); // sp1���� �ٸ�
					// ������ ������ü ���
					// ���� �̷��� ����ϸ� �ȵ˴ϴ�.

	// �ڿ��� ȹ���ϴ� ���� ��! �ڿ� ���� ��ü��
	// �ʱ�ȭ �ɶ� �ؾ� �Ѵ�.
	// Resouce Acquision Is Initialization
	// RAII IDioms

}

