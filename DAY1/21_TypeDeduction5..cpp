#include <iostream>
using namespace std;

int main()
{
	int n = 10;
	int& r = n;
	const int c = n;

	// auto Ÿ�� �߷��� "���ø� Ÿ�� �߷�" �� �����մϴ�.

	// ��Ģ 1. "auto a = �캯" �ΰ�� 
	//		�캯�� const, volatile, reference ���������
	//	    auto ����
	// T    a = �Լ�����
	// auto a = �캯

	auto a1 = n;// auto : int
	auto a2 = r;// auto : int
	auto a3 = c;// auto : int
	a3 = 10; //

	// ��Ģ 2. "auto& a = �캯". 
	//		�캯�� const, volatile ����. 
	//		reference�� �����ϰ� auto ����
	// T&    a = �Լ�����
	// auto& a = �캯
	auto& a4 = n; // auto : int    a4 : int&
	auto& a5 = r; // auto : int    a5 : int&
	auto& a6 = c; // auto : const int  a6 : const int&
	a6 = 10; //  error


	// auto �� �迭 ����
	// auto  a1 = �迭 : a1�� ������
	// auto& a2 = �迭 : a2�� �迭�� ����Ű�� ����
	int x[3] = { 1,2,3 };

	// (A) ó�� ����� ������ ����
	// �׷���, (B)ó�� �����.
	auto  a7 = x; // (A) int a7[3] = x; error
				  // (B) int* a7 = x;
	
	auto& a8 = x; // (A) int (&a8)[3] = x;


	cout << typeid(a7).name() << endl;
	cout << typeid(a8).name() << endl;
}

