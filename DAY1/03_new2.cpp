#include <iostream>
using namespace std;

// new�� �޸��Ҵ��Ҷ� ����ϴ� operator new()�� ������ �����մϴ�.
void* operator new( size_t sz)
{
	cout << "my new : " << sz << endl;
	return malloc(sz);
}
// operator new()�Լ��� 2�� �̻� ����� �ֽ��ϴ�.
// ��, 1��° ���ڴ� �ݵ�� size_t �̾�� �մϴ�
void* operator new(size_t sz, const char* s, int n)
{
	cout << "my new2 : " << sz << endl;
	return malloc(sz);
}


void operator delete(void* p)
{
	free(p);
}

int main()
{
	//int* p1 = new int; // ���ڰ� �Ѱ��� operator new()���

	int* p1 = new("AAA", 10) int; // ���ڰ� 3���� 
								// operator new()���
									
	delete p1;         
}




