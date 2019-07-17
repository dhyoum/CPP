#include <iostream>
using namespace std;

// move ����
class Cat
{
	char* name;
	int   age;
public:
	Cat(const char* s, int a) : age(a)
	{
		name = new char[strlen(s) + 1];
		strcpy(name, s);
	}
	~Cat() { delete[] name; }

	// ���� ����� ������ ���� ������
	Cat(const Cat& c) : age(c.age)
	{
		// �޸� �Ҵ���.. �޸𸮸� ��°�� ����
		name = new char[strlen(c.name) + 1];
		strcpy(name, c.name);
	}
};
int main()
{
	Cat c1("NABI", 2);
	Cat c2 = c1;  // runtime error
			// ���� ������ ���� �����ڰ� ������ ok
}




/*
// ���� ����� ������ ���� ������
Cat(const Cat& c) : age(c.age)
{
	// �޸� �Ҵ���.. �޸𸮸� ��°�� ����
	name = new char[strlen(c.name) + 1];
	strcpy(name, c.name);
}
*/

