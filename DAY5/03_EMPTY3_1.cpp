#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <algorithm>
using namespace std;


// �ݺ��� ī�װ� 5����
// �Է� �ݺ��� : �Է�, ++
// ��� �ݺ��� : ���, ++
// ������ �ݺ��� : �Է�, ++, ��Ƽ �н�      �̱۸���Ʈ �ݺ���
// ����� �ݺ��� : �Է�, ++, --, ��Ƽ �н�  ������Ʈ �ݺ���
// �������� �ݺ��� : �Է�, ++, --, +, -, [], ��Ƽ �н�
//							=> ���ӵ� �޸𸮿� ���� (vector)

int main()
{
	list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	// �Ʒ� �ڵ忡 ���ؼ� ������ ������
	// sort : �������� �ݺ��ڸ� �䱸�մϴ�.
	// list �ݺ��� : ����� �ݺ��� �Դϴ�.
	sort(s.begin(), s.end()); // error

	s.sort(); // list�� STL �˰��� ���������� ������
			// ��� �Լ� sort()�� �ִ�.
			// quick �� �ƴ� �ٸ� �˰��� ���

	//���� : �Ʒ� ��� �Լ��� �������?
	vector<int> v = { 1,2,3,4,5 };
	//v.sort(); // ???? ������� ???
			//����. vector�� �������� �ݺ����̹Ƿ�
			// ��� �˰��� ��밡��
			// sort()�Ϲ��Լ� ����ϸ� �ȴ�.



	forward_list<int> s2 = { 1,2,3 };
	// reverse : ����� �ݺ��ڸ� �䱸
	// �̱۸���Ʈ : ������ �ݺ���
	reverse(s2.begin(), s2.end()); // error





	//sort()
	// cppreference.com ���� find �˻�
}






