// checked_delete
#include <iostream>
using namespace std;

class Test; // Ŭ���� ���� ����
			// �Ϻ��� ������ ��� ������ ��밡��
			// �ҿ��� Ÿ��(incomplete)
			// delete �Ҷ� �Ҹ��ڰ� ȣ����� �ʴ´�.
void foo(Test* p)
{
	//default_delete<int> d;

	// checked delete 
	static_assert(sizeof(Test) > 0,
			"ERROR, incomplete");

	delete p;
}

class Test
{
public:
	Test()  { cout << "Test()" << endl; }
	~Test() { cout << "~Test()" << endl; }
};

int main()
{
	Test* p = new Test;
	foo(p);
}

// C++ �⺻���� 
// ��ü ���� ������ �����
// template �̳� ��� ������(IDioms)
// STL  => C++20

