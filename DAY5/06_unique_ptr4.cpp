#include <iostream>
using namespace std;

template<typename T> struct xdefault_delete
{
	inline void operator()(T* obj) { delete obj; }
};
// ������ ���� : �Լ���ü�� ���ø� ���ڷ� ����
template<typename T,
	typename D = xdefault_delete<T>>
	class xunique_ptr
{
	T* obj;
	D del; // ������
public:
	inline explicit 
		xunique_ptr(T* p = 0, D d = D() ) 
		: obj(p), del(d) {}



	inline ~xunique_ptr()
	{
		del(obj);
	}


	inline T* operator->() { return obj; }
	inline T& operator*() { return *obj; }

	xunique_ptr(const xunique_ptr&) = delete;
	xunique_ptr& operator=(const xunique_ptr&) = delete;
};

int main()
{
	auto f = [](int* p) { free(p); };

	xunique_ptr<int, decltype(f) > 
				p1((int*)malloc(100), f);


}


