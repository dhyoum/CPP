#define USING_GUI
#include "cppmaster.h" // ec_set_timer
#include <iostream>
#include <string>
using namespace std;

/*
void foo(int id)
{
	cout << "foo : " << id << endl;
}

int main()
{
	int n1 = ec_set_timer(500,  foo);
	int n2 = ec_set_timer(1000, foo);

	ec_process_message();
}
*/
// Ÿ�̸� ������ ����ϴ� Ŭ������ ����� ���ô�.
// 11 page

#include <map>

class Clock;  // class ���漱�� ����

map<int, Clock*> this_map; // this�� �����ϱ� ���� 
						   // �ڷᱸ��

class Clock
{
	string name;
public:
	Clock(string s) : name(s) {}

	void Start(int ms) 
	{
		int id = ec_set_timer(ms, timerRoutine);

		// this �����͸� �ڷᱸ���� �����մϴ�.
		this_map[id] = this;
	}

	// �ٽ� 1. �Ʒ� �Լ��� static ��� �Լ� �̾�� �մϴ�.
	static void timerRoutine(int id)
	{
		//cout << name << endl; // error

		Clock* self = this_map[id];

		cout << self->name << endl;
	}

};

int main()
{
	Clock c1("A");
	Clock c2("\tB");

	c1.Start(500); // 500ms ���� �̸� ���
	c2.Start(1000);
	ec_process_message();
}


