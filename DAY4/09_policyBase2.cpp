#include <iostream>
#include <vector>
using namespace std;
/*
// STL vector�� �����غ��ô�
template<typename T, 
		 typename Ax = allocator<T>  > class vector
{
	T* buff;
	int size;
	Ax ax;  // �޸� �Ҵ��
public:
	void push_back(const T& a)
	{
		// �޸𸮰� �����ؼ� ���Ҵ��ؾ� �մϴ�. ��� �ұ�� ?
		// new ? malloc ? brk ? HeapAlloc 
		buff = ax.allocate(10);
		ax.deallocate(buff, 10); 

	}
};
*/

int main()
{
	vector<int> v;
}