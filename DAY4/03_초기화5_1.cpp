#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

void foo(string s) {}

int main()
{
	// explicit �ƴ�.
	string s1("hello");
	string s2 = "hello"; // ok
	foo("hello");

	// explicit ������
	vector<int> v1(10);
	vector<int> v2 = 10; // error

	// explicit ������
	unique_ptr<int> p1(new int); // ok
	unique_ptr<int> p2 = new int; // error
}


