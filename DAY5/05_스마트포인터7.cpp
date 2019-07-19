#include <iostream>
#include <memory>
#include <string>
using namespace std;

struct People
{
	std::string name;

	People(std::string n) : name(n) {}
	~People() { std::cout << name << " �ı�" << std::endl; }


	//shared_ptr<People> bf;

	People* bf; // raw pointer. ������� ���� ����.
};
int main()
{
	shared_ptr<People> sp1(new People("kim"));
	{
		shared_ptr<People> sp2(new People("lee"));

		sp1->bf = sp2.get();
		sp2->bf = sp1.get();
	}

	// sp2 �� ����Ű�� ��ü�� �ı� �Ǿ�����
	// raw pointer �� bf�� ������� Ȯ���� ����� ����.
	if (sp1->bf != nullptr)
	{
		cout << sp1->bf->name << endl; // ����!!
	}

}



