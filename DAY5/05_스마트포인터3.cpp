#include <iostream>
using namespace std;

// C++11�� ����Ʈ�����͸� ����Ϸ��� �ʿ��� ���
#include <memory>

int main()
{
	// 1. explicit ������
	shared_ptr<int> p1(new int); // ok
	//shared_ptr<int> p2 = new int; // error

	// 2. ����Ʈ ������ �������

	shared_ptr<int> sp1(new int);
	shared_ptr<int> sp2 = sp1;

	cout << sizeof(sp1) << endl;// raw �������� 
							// 2�� ����

	// (A) ������ü�� �����Ǵ� �������
	// (B) ����Ʈ ������ ��ü�� ũ�Ⱑ 
	//     raw pointer 2��
}







