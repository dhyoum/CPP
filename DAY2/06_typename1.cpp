// 36page
struct Test
{
	// �Ʒ� 4�� ����� ������ Ư¡�� ?
	enum { value = 0 };
	static int data;
	typedef int DWORD;
	struct nested {};
};
int Test::data = 0;

int main()
{
	int p = 0;

	// �Ʒ� �ڵ忡�� *�� �ǹ̸� ������ ������
	Test::value * p; // ���ϱ� p
	Test::data  * p; // ���ϱ� p
	Test::DWORD * p; // ������ ���� ����
	Test::nested* p; // ������ ���� ����

}



