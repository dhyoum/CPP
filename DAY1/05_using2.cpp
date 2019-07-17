#include <set>
#include <functional>
#include <iostream>
using namespace std;

typedef set<int> SET;
typedef set<double> SETD;

// typedef �� Ÿ���� ���� ����� �ִ�.
// ���ø��� ������ �ȵȴ�.
//template<typename T>
//typedef set SET;   // error

template<typename T>
using SET = set<T>;

// �� �ڵ尡 ������ �Ʒ� 2�� ó�� ��밡���մϴ�.

// SET<int> => set<int>
// SET<double> => set<double>


int main()
{
	//set<int> s;

	SET s2;


	s.insert(10);
	s.insert(15);
	s.insert(6);

	for (auto n : s)
		cout << n << endl;
}