#include <iostream>
using namespace std;

// ���� : �Ϲ� �Լ� �����Ϳ� ��� �Լ� ������ - 7page
// �ٽ� 1. �Ϲ��Լ� �����Ϳ� ��� �Լ��� �ּҸ� ������ ����.
// �ٽ� 2. �Ϲ��Լ� �����Ϳ� static ��� �Լ��� �ּҸ� 
//         ������ �ִ�.
// 3. ��� �Լ� �����͸� ����� ����ϴ� ���
//    �Ʒ� main ����, ���� 7~8 page ����.
class Dialog
{
public:
	void Close(int a) {	cout << "Dialog::Close" << endl; }
	static void Close2(int a) { cout << "Dialog::Close2" << endl; }
};

void foo(int a) { cout << "foo" << endl; }

int main()
{
	void(*f1)(int) = &foo;  // ok
//	void(*f2)(int) = &Dialog::Close; // error
	void(*f2)(int) = &Dialog::Close2; // ok

	// ��� �Լ� �����͸� ����� ���
	void(Dialog::*f3)(int) = &Dialog::Close; // 

	f3(0); // error. ��ü�� ����.

	Dialog dlg;
	//dlg.f3(0); // error. f3�̶�� ����Լ��� ã�Եȴ�.

	//dlg.*f3(0); // .* : pointer to member operator
				// ������ �켱���� ������ error

	(dlg.*f3)(0);  // ok..  �� ǥ������
				// ��� �Լ� �����͸� ����ؼ� �Լ���
				// ȣ���ϴ� ǥ��� �Դϴ�.  8page
	Dialog* pDlg = &dlg;
	(pDlg->*f3)(0);


}








