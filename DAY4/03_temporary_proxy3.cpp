#include <vector>
#include <iostream>
using namespace std;

/*
template<typename T> class vector
{
	T* buff;
	int sz;
public:
	vector(int size) : sz(size)
	{
		buff = (T*)operator new(sizeof(T)*sz);
	}
};

template<> class vector<bool>
{
	T* buff;
	int sz;
public:
	vector(int size) : sz(size)
	{
		// size bit ��ŭ�� �Ҵ�
	}
	bool_bit_��ȯ���ϴ�_temporary_proxy operator[](int idx) {}
};
*/
int main()
{
	vector<int>  v1(32); // �޸� int � 
	vector<bool> v2(32); // �޸� bool �

	auto a1 = v1[0];
	auto a2 = v2[0];

	cout << typeid(a1).name() << endl;
	cout << typeid(a2).name() << endl;

	auto& a3 = v1[0];
	//auto& a4 = v2[0]; // error
	auto&& a5 = v2[0];

	for(auto&& n : v2) {}
}


