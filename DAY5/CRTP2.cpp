// �ȵ���̵� �ҽ�����
// libutils/include/utils/Singleton.h ���� ������

template<typename T> class Singleton
{
protected:
	Singleton() = default;

	Singleton(const Singleton&) = delete;
	void operator=(const Singleton&) = delete;
public:
	static T& getInstance()
	{
		static T instance;
		return instance;
	}
};
// Keyboard �� �̱������� �ϰ� �ʹ�
class Keyboard : public Singleton<Keyboard>
{
};

int main()
{
	Cursor& c1 = Cursor::getInstance();
}