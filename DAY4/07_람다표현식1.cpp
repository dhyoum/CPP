#include <algorithm>
#include <functional>  // less<>, greater<>���� �Լ���ü�� �ֽ��ϴ�
using namespace std;

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// 1. �Լ��� ����� ��å ����
	sort(x, x + 10, cmp1);

	// 2. �Լ���ü�� ����� ��å ����
	less<int> f;
	sort(x, x + 10, f);

	sort(x, x + 10, less<int>()); // �ӽð�ü�� ����


	// 3. C++11 ���ʹ� ���� ǥ������ ����ϸ� �˴ϴ�.
	sort(x, x + 10,
		[](int a, int b) { return a < b; });

	// �� ������ ���� �����Ϸ��� �Ʒ� �ڵ�� �����մϴ�.
	// ����ǥ���� : �Լ���ü�� ����� ǥ����
	// Ŭ����(closure) : ����ǥ������ ���� �ӽð�ü

	// 289 page
	class ClosureType
	{
	public:
		inline bool operator()(int a, int b) const
		{
			return a < b;
		}
	};
	sort(x, x + 10,	ClosureType());

}






