
// int, double ���� Ÿ���̸��� ������� ����
// �ǹ̸� ������ Ÿ���� �������.

// Width, Height, xPos, yPos Ÿ�Ե� : NamedType

class xPos {};
class yPos {}

class Point
{
	int x;
	int y;
public:
	// setter�� ���� ����� ������
	// �����ڴ� �Ҽ� �����ϴ�.(�̸��� �����Ƿ�)
	//Point(int xx) : x(xx) {}
	//Point(int yy) : y(yy) {}

	Point(xPos xx) : x(xx) {}
	Point(yPos yy) : y(yy) {}

	void setx(int a) { x = a; }
	void sety(int a) { y = a; }
};

int main()
{
	Point p1(10);
	Point p2(20);
}