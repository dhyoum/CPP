#include <string>
#include <iostream>
using namespace std;

int main()
{
	string s1 = "C:\\aa\\bb\\cc"; // "\\" ���� ǥ�����̳� ���丮 ǥ���� �θ� ���

	// raw string : \ �� Ư�� ���ڷ� ������� ����
	// "( : ���ڿ� ����
	// )" : ���ڿ� ����
	string s2 = R"(C:\aa\bb\cc)"; 
	cout << s2 << endl;

	// " �� �����Ϸ��� - �׳� ������ �ȴ�
	string s3 = R"(C:\aa\b"b\cc)";


	// )" �� ǥ���Ϸ���
	string s4 = R"***(C:\aa\)"b\cc)***";

	cout << s4 << endl;


}







