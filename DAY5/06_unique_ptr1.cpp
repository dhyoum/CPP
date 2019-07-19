// 06_unique_ptr1.cpp

#include <iostream>
#include <memory>
using namespace std;

int main()
{
	// shared_ptr : �ڿ��� ����
	// weak_ptr   : �ڿ� ���� ����
	// unique_ptr : �ڿ��� ����
	unique_ptr<int> p1(new int);
	//unique_ptr<int> p2 = p1; // error

	unique_ptr<int> p2 = move(p1); // ok


	shared_ptr<int> sp(new int);
	unique_ptr<int> up(new int);

	// ������ ������ ��� ������
	shared_ptr<int> sp1 = up;		// 1.error
	shared_ptr<int> sp2 = move(up);	// 2.ok

	unique_ptr<int> up1 = sp;		// 3.error
	unique_ptr<int> up2 = move(sp);	// 4.error
}

// �Լ��� �޸𸮸� �Ҵ����� ����Ʈ�����ͷ� ��ȯ�Ϸ��� �մϴ�.
// unique �� shared �� ������ ������� ?
//shared_ptr<int> AllocMemory(int sz)
unique_ptr<int> AllocMemory(int sz)
{
	return ? ;
}
// unque_ptr�� ��ȯ�ϸ� ��ȯ���� �޴� Ÿ���� �Ʒ�ó��
// �����Ҽ� �ִ�.
shared_ptr<int> ret1 = AllocMemory(100);
unique_ptr<int> ret2 = AllocMemory(100);

