// ���� ���� ������(Policy Base Design)
// ���ø� ���ڷ� ��å�� ���� Ŭ������ �����ϴ�
// ���
// ���� ���� ���� ��å��ü�� �Ҽ� �ִ�.

// ��å Ŭ�������� ���Ѿ� �ϴ� ��Ģ�� �ְ� �ȴ�.
// github.com/webkit
// source/wtf/wtf/nolock.h   ���� ������

// "modern C++ design"

template<typename T, 
	typename ThreadModel = nolock> class List
{
	ThreadModel tm;
public:
	void push_front(const T& a)
	{
		tm.lock();
		//...
		tm.unlock();
	}
};

// ����ȭ ��å�� ���� Ŭ����
class nolock
{
public:
	inline void lock()   {}
	inline void unlock() {}
};
class posix_lock
{
public:
	inline void lock() {}
	inline void unlock() {}
};
//-----------------------
List<int, nolock> s;    // ��������.   ��Ƽ�����忡 �������� �ʴ�.




int main()
{
	s.push_front(10);
}