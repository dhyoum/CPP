// 1���� thiscall3.cpp   - 
// cafe.naver.com/cppmaster���� �޾Ƶ� �˴ϴ�.
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <memory>
using namespace std;

class Thread : public enable_shared_from_this<Thread>
{
	// �����带 ������ Ŭ������ ����Ʈ�����ͷ�
	// �����ϸ� �ڽ��� ��������� ������ �Լ���
	// ���� �ɶ������� ������Ѿ� �Ѵ�.
	shared_ptr<Thread> holdMe;
public:
	
	//Thread() : holdMe(this) {} // ���� �ȵ�
				// �ֽ����尡 ���� sp�� ������ü�� ����
				// �ϰ� �ؾ� �ϴµ�..
				// this�� raw pointer ��.

	Thread()
	{
		// �̹� ������� ������ü�� �����Ҽ��ְ� �ϴ�
		// ���
		// ��, �̹� ������� ������ü�� ������ 
		// runtime error
		// �����ڰ� ȣ��� ������ ���� main �� 
		// sp�� ����� ���� ���Դϴ�.
		//holdMe = shared_from_this();
	}

	~Thread() { cout << "~Thread" << endl; }

	void run()
	{
		holdMe = shared_from_this();

		CreateThread(0, 0, threadProc, this, 0, 0);
	}

	// ���� android source github
	// platform_system_core
	// libutils/include/utils/thread.h
	// libutils/Threads.cpp

	static DWORD __stdcall threadProc(void* p)
	{
		Thread* self = static_cast<Thread*>(p);

		// ���� ������ �ٽ� ����Ʈ ������ ���
		shared_ptr<Thread> sp(self->holdMe);
		self->holdMe.reset();		
		
		self->Main(); 

		// �����尡 ���� �Ҷ� 
		// ������ ��ü�� ���� ��� ����..
		//self->holdMe.reset();
		// ���� : ��ó�� �������� �ڿ��� ���� �ϸ�
		// ���ʿ��� ���� �߻��� �ڿ������� ���ɼ��� �ִ�
		return 0;
	}




	virtual void Main() = 0; 
};

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
	{
		shared_ptr<MyThread> sp(new MyThread(10));
		sp->run();
	}

	_getch();
}
