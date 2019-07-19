#include <iostream>
#include <memory>
using namespace std;

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
};

int main()
{
	std::shared_ptr<Car> sp1(new Car);
	std::shared_ptr<Car> sp2 = sp1;

	// -> ���� : ���ü(Car)�� ����� ����
	sp1->Go();


	// . ���� : ����Ʈ ������ ��ü�� ����� ����
	int n = sp1.use_count();
	cout << n << endl; // 2

	Car* p = sp1.get(); // raw pointer ������
	
}





