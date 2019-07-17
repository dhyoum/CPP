// 3_�Ϻ���������
#include <iostream>
using namespace std;

// cafe.naver.com/cppmaster  stopwatch.cpp 
#include <chrono>
#include <string>

// StopWatch Ŭ���� �����ؿ�����.
class stop_watch
{
	std::string message;
	std::chrono::high_resolution_clock::time_point start;
public:
	inline stop_watch(std::string msg = "") : message(msg) { start = std::chrono::high_resolution_clock::now(); }
	inline ~stop_watch()
	{
		std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> time_span = std::chrono::duration_cast<std::chrono::duration<double>>(end - start);
		std::cout << message << " " << time_span.count() << " seconds." << std::endl;;
	}
};


template<typename F, typename ... Types>
decltype(auto) chronometry(F f, Types&& ... args)
{
	stop_watch sw;  // �����ڿ��� �ð� ���
					// �Ҹ��ڿ��� ���� �ð� ���
	return f(std::forward<Types>(args)...);
}
void foo(int a)
{
	for (int i = 0; i < 10000; i++) rand();
}
int main()
{
	chronometry(foo, 5); // �ð� ����
}



