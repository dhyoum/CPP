#include <iostream>
#include <memory>
using namespace std;

class Car
{
public:
	void Go() {}
	~Car() {std::cout << "~Car" << std::endl;	}
};
int main()
{
	shared_ptr<Car> sp;
	weak_ptr<Car>   wp;
//	{
		shared_ptr<Car> p(new Car);
		
		//sp = p; // ���� ��� ����
		wp = p; //  ������� ���� ����

		cout << p.use_count() << endl;  // 2
//	}	
	if (wp.expired())
	{
		cout << "��ü �ı�" << endl;
	}
	else
	{
		// wp �� ����ؼ� ��ü ����
	//	wp->Go(); // error. -> ������ ����

		// wp�� ������ sp�� ���� ����
		shared_ptr<Car> sp = wp.lock();

		if (sp)
			sp->Go();
	}

	cout << "------" << endl;
}

