// 2_EBCO
#include <iostream>
using namespace std;

class Empty {};

class AAA
{
	Empty a;
	int b;
};
class BBB : public Empty
{
	int b;
};
// EBCO : Empty Base Class Optimization
// empty �� ��� Ŭ������ �Ǹ� ũ�Ⱑ 0����
// ���ȴ�.
int main()
{
 	cout << sizeof(AAA) << endl; // 8
	cout << sizeof(BBB) << endl; // 4
}

