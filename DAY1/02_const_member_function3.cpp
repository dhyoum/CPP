// Rect.h
class Rect
{
	int x, y, w, h;
public:
	// ��� ��� �Լ����� const Ű�����
	// ����� ������ ��� �־�� �մϴ�.
	int getArea() const;
};
// Rect.cpp
int Rect::getArea() const 
{
	return w * h;
}
int main()
{
}

// �Ĵ��� 20���Դϴ�.
// ���� ������ 13:00 ~ �ϰڽ��ϴ�.
