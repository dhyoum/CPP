#include <iostream>
using namespace std;

template<typename T> struct xdefault_delete
{
	inline void operator()(T* obj){	delete obj;	}
};
// ������ ���� : �Լ���ü�� ���ø� ���ڷ� ����
template<typename T, 
	     typename D = xdefault_delete<T>> 
class xunique_ptr
{
	T* obj;
public:
	inline explicit xunique_ptr(T* p = 0) : obj(p) {}
	
	inline ~xunique_ptr() 
	{ 
		D d;
		d(obj);
		//delete obj;
	}


	inline T* operator->() { return obj; }
	inline T& operator*() { return *obj; }

	xunique_ptr(const xunique_ptr&) = delete;
	xunique_ptr& operator=(const xunique_ptr&) = delete;
};

int main()
{
	xunique_ptr<int> p1(new int);


}


