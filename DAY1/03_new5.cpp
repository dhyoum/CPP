#include <iostream>
#include <vector>
using namespace std;

/*
int main()
{
	vector<int> v(10, 0); // 10���� 0���� �ʱ�ȭ
	v.resize(7);

	cout << v.size() << endl;     // 7
	cout << v.capacity() << endl; // 10

	v.push_back(0);

	cout << v.size() << endl;     // 8
	cout << v.capacity() << endl; // 10

	v.shrink_to_fit(); // ������ �޸� ����

	cout << v.size() << endl;     // 8
	cout << v.capacity() << endl; // 8

	v.push_back(0);

	cout << v.size() << endl;     // 9
	cout << v.capacity() << endl; // 12
}
*/
class DBConnect
{
public:
	DBConnect()  { cout << "DB ����" << endl; }
	~DBConnect() { cout << "DB �ݱ�" << endl; }
};
int main()
{
	vector<DBConnect> v(10);
	v.resize(7); // ��� �����Ǿ� ������ ������
				 // ������.
			// �پ�� 3���� �޸𸮴� �ֽ��ϴ�.
			// ������ �Ҹ��ڸ� ��������� ȣ���ؼ�
			// DB�� �ݾƾ� �մϴ�.

	v.resize(8); // 8��° �޸𸮴� �̹� �ֽ��ϴ�.
		// �����ڸ� ȣ���ؼ� �ٽ� DB�� �ٿ��� �մϴ�.
}

// �ȵ���̵� �ҽ�
// platform_system_core/libutils
// include/utils/type_helpers.h �������
// copy_type() �Լ� ã�ƺ�����. - 167 line










