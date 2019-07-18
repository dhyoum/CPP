inline bool cmp1(int a, int b) { return a < b; }
inline bool cmp2(int a, int b) { return a > b; }
struct Less { inline bool operator()(int a, int b) { return a < b; } };
struct Greater { inline bool operator()(int a, int b) { return a > b; } };

template<typename T> void foo(T f){	int n = f(1, 2);}
int main()
{
	Less    f1;
	Greater f2;
	foo(cmp1);
	foo(cmp2);
	foo(f1);
	foo(f2);
}
// 1. ������ �ϸ� foo �Լ��� � �����ɱ�� ? 3��
// 2. �� foo �Լ��� f(1,2)�� �ζ��� ġȯ ���θ� ������ ������
// 3. foo�� �����ϸ� ��� �Լ��� ���� ������� ?

// linux : g++
// vc++  : cl


// cl 06_�Լ���ü7.cpp   /Ob1  /FAs


// /Ob1 : �ζ��� ġȯ ������ �޶�
// /FAs : ����� �ڵ� ������ �޶�.

// notepad 06_�Լ���ü7.asm   ���� ���� ������






