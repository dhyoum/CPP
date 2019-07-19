// CRTP1
#include <iostream>
using namespace std;
// CRTP ( Curiously Recurring Template Pattern)
// ��� Ŭ������ ���ø� �ε� �Ļ� Ŭ������ ���鶧
// �ڽ��� �̸��� ���ø� ���ڷ� �����ϴ� ���

class Window
{
	// �������� ��� ����� ���� ����
	void Click() {}
};

template<typename T> 
class MsgWindow : public Window
{
public:
	void msgLoop() // void msgLoop(Window* this)
	{
		//Click(); // this->Click()
		static_cast<T*>(this)->Click();
	}
	void Click() { cout << "1" << endl; }
};

class MyWindow : public MsgWindow< MyWindow  >
{
public:
	void Click() { cout << "2" << endl; }
};

int main()
{
	vector<Window*> v;

	MyWindow w;
	w.msgLoop(); // 1 ? 2





//	Window* p = new MyWindow;
//	p->Click(); // ?


}
