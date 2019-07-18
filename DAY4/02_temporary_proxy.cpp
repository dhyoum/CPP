#include <iostream>
using namespace std;

// ������� ��� ���ڿ� Ŭ����
class String
{
	char* buff;
	int*  ref;
public:
	String(const char* s)
	{
		buff = new char[strlen(s) + 1];
		strcpy(buff, s);
		ref = new int(1);
	}
	String(const String& s) : buff(s.buff), ref(s.ref)
	{
		++(*ref);
	}

	// ������� ����� �Ҹ���
	~String()
	{
		if (--(*ref) == 0)
		{
			delete[] buff;
			delete ref;
		}
	}


	void print()const { cout << buff << endl; }

	// [] ������ ������ 
	// ��ü�� �迭ó�� ����Ҽ� �ְ� �մϴ�
	// ��ȣ�� ���ʿ� �ü� �ְ� �ϱ� ����
	// ���� ��ȯ�ؾ� �մϴ�.
	char& operator[](int idx)
	{
		return buff[idx];
	}
};

int main()
{
	String s1 = "hello";
	String s2 = s1;

	char c = s1[0]; // s1.operator[](0)

	cout << c << endl;

	s1[0] = 'X';

	s1.print();
	s2.print();

}