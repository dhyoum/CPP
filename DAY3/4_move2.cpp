#include <iostream>
using namespace std;

// �ٽ� : move ������ ����

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
	
	Cat( const Cat& c) : age(c.age)
	{
		cout << "copy" << endl;
		name = new char[strlen(c.name) + 1];
		strcpy(name, c.name);
	}
	// �ӽð�ü(rvalue)�� ���� �Ҷ� ����� 
	// ���ο� ������ - "move ������" ��� �մϴ�.
	Cat(Cat&& c) : age(c.age), name(c.name)
	{
		cout << "move" << endl;
		c.name = nullptr; // ������ü�� �ڿ� reset
	}
};
Cat foo()
{
	Cat c1("AAA",2);
	return c1;
}
int main()
{
	Cat c = foo(); // �� ������ ������ ���ô�.
					// move ������

	Cat c1("NABI", 2);
	Cat c2 = c1;  // ���� ������

	Cat c3 = static_cast<Cat&&>(c2); // move

	Cat c4 = std::move(c1); // ��ó�� ĳ�����ϰ� 
					// �ֽ��ϴ�.
}







