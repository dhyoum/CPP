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

	// char �� ����� Ŭ������ ����ϴ�. - Proxy����
	class CharProxy
	{
		String& str;
		int idx;
	public:
		CharProxy(String& s, int i)
			: str(s), idx(i) {}

		// ��ȯ ������ �Լ� : ��ü�� char�� ��ȯ�ǰ� �մϴ�.
		// Proxy �� �����ʿ� ������ ȣ��
		operator char() 
		{
			cout << "Read" << endl;
			return str.buff[idx]; 
		}

		// ���Կ����� : proxy�� ���ʿ� ������ ȣ��
		CharProxy& operator=(char c)
		{
			cout << "Write. ���� �и�" << endl;
			str.buff[idx] = c; 
			return *this;
		}
	};

	CharProxy operator[](int idx)
	{
		return CharProxy(*this, idx);
	}
};

int main()
{
	String s1 = "hello";
	String s2 = s1;

	char c = s1[0]; // read. �ڿ��� �и��� �ʿ� �����ϴ�

	cout << c << endl;

	s1[0] = 'X'; // write, �̼��� �ڿ��� �и��Ǿ�� �մϴ�.
				// COW : Copy On Write
	s1.print();
	s2.print();

}