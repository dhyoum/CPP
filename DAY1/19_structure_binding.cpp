#include <iostream>
using namespace std;

// 201 page
struct Point
{
	int x = 0;
	int y = 0;
};
int main()
{
	Point p = { 1,2 };

	int x = p.x;
	int y = p.y;

	// ����ü�� ��� ��� ���� �ѹ��� ������ ����
	// 1. �ݵ�� auto Ÿ�Ը� ����
	// 2. ����ü �� �ƴ϶� �迭�� ����
	auto[x1, y1] = p;

	int arr[3] = { 1,2,3 };
	
	auto[a, b, c] = arr;

	auto& [r1, r2, r3] = arr; // ok
}