#include <algorithm>
using namespace std;

// ���̺귯���� ����
// 1. ���� : ����� �Ѵ�.
// 2. ������ : ��å ������ �����ؾ� �Ѵ�.

// ������ ���� �帧�ӿ��� ���ؾ� �ϴ� ��å�� �и��Ǿ�� �Ѵ�.
// �Ϲ� �Լ������� ���ϴ� ���� ����ȭ �Ѵ�.

// 286 page
void Sort(int* x, int sz, bool(*cmp)(int, int) ) 
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
			//if (x[i] > x[j])  // 1

			if ( cmp(x[i], x[j]) ) // 2
				swap( x[i], x[j]);
		}
	}
}
//--------------------
inline bool cmp1(int a, int b) { return a < b; }
inline bool cmp2(int a, int b) { return a > b; }




int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };
	Sort(x, 10, cmp1);
}





