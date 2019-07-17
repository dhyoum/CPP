// C++17���� �߰��� ����
// 199 page
int foo() { return 0; }

int main()
{
	int ret = foo();
	if (ret == 0)
	{
		//....
	}
	// VC++2017/2019 : C++14�� ����Ʈ
	// g++ 8.x, 9.1  : C++14�� ����Ʈ

	// C++17 �� ����Ϸ��� - ���� 2page
	// VC++ : /std:c++17 �Ǵ� /std:c++latest
	// g++  : -std=c++17

	// C++20 : c++2a  => Ȯ���Ǹ�   C++20
	// C++23 : c++2b  =>           C++23


	// C++17 �� ���ο� if
	// init if ��� �Ҹ��� ����
	if (int ret = foo(); ret == 0)
	{
	}

	switch (int n = foo(); n)
	{
	case 1: break;
	}
}



