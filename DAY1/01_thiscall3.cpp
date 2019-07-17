#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

// ��Ƽ ������ ������ ��ü�������� ����. - 9 page

/*
DWORD __stdcall threadProc(void* p)
{
	return 0;
}

int main()
{
	CreateThread(0, 0, threadProc, "A", 0, 0);
}
*/


//-------------------------------------------
// ���̺귯�� ���� Ŭ����
class Thread
{
public:
	void run()
	{ 
		CreateThread(0, 0, threadProc, this, 0, 0); 
	}
	//�ٽ� 1. �Ʒ� �Լ��� static ����Լ� �̾��
	//		�ϴ� ������ �˾ƾ� �մϴ�.
	//     2. static ��� �Լ��� ������ �Լ�����
	//		  this�� ����Ҽ� �ְ� �ϱ� ����
	//        ���ڷ� �����ϴ� ���

	// ���ۿ��� "android source github"�˻�
	// 1��° ��ũ
	// platform_system_core/libutils/include/utils
	// Thread.h ���� ������
	// platform_system_core/libutils/threads.cpp

	static DWORD __stdcall threadProc(void* p)
	{
		Thread* self = static_cast<Thread*>(p);

		// self �� this�Դϴ�. self ����ϸ�
		// ��� ����� ���� �����մϴ�.
		self->Main(); // Main(self)

		//Main(); // this->Main()���� ȣ��Ǿ�� �Ѵ�.
				// Main(this)
		return 0;
	}

	virtual void Main() = 0; // Main(Thread* this)
};



// ���̺귯�� ����� Ŭ����
class MyThread : public Thread
{
	int data;
public:
	MyThread(int d) : data(d) {}
	virtual void Main() 
	{ 
		cout << "MyThread Main" << endl; 
		data = 10;
	}
};

int main()
{
	MyThread t(10);
	t.run(); // ���ο� ������ ������, Main �����Լ�����

	_getch();
}
