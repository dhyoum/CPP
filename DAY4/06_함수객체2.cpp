#include <iostream>
#include <bitset>
using namespace std;

template<int N> class URandom
{
	bitset<N> bs;
	bool recycle;
public:
	URandom(bool b = false) : recycle(b)
	{
		bs.set(); // ��� ��Ʈ�� 1��
	}

	int operator()()
	{
		if (bs.none()) // ��� 0�̸�
		{
			if (recycle)
				bs.set(); // �ٽ� ��� ��Ʈ 1��
			else
				return -1;
		}
		int v = -1;		
		while (!bs.test(v = rand() % N));
		bs.reset(v);
		return v;
	}
};
int main()
{
	URandom<20> r;// (true);
	for (int i = 0; i < 15; i++)
		cout << r() << endl;
}






/*
// 0 ~ 9 ������ �ߺ����� ���� ������ ���ϴ� �Լ�
int urand()
{
	return rand() % 10;
}
int main()
{
	for (int i = 0; i < 10; i++)
		cout << urand() << endl;

}
*/