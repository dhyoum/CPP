// �ٽ� : ��� ��� �Լ��� ������ �ƴ� �ʼ� �����Դϴ�.
//       ��ü�� ���¸� �������� �ʴ� ��� ����Լ���
//       �ݵ�� ��� ��� �Լ��� �ؾ� �մϴ�.
//       getter �� �ݵ�� ��� ����Լ��̾�� �մϴ�.

struct Rect
{
	int xpos, ypos, width, height;
public:
	Rect(int x = 0, int y = 0, int w = 0, int h = 0)
		: xpos(x), ypos(y), width(w), height(h) {}

	int getArea() const { return width * height; }
};

//void foo(Rect r) // call by value
void foo(const Rect& r)
{
	int n = r.getArea(); // ?
}
int main()
{
	Rect r(1, 1, 10, 10); // ��� ��ü �ƴ�.

	int n = r.getArea(); // ok

	foo(r);
}

