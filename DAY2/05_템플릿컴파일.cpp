// 템플릿은 2번 컴파일 됩니다.

// 1. 템플릿 자체를 컴파일 합니다.
//    T와 관련 없는 코드의 에러 유무를 확인합니다.

// 2. 실제 C++코드를 생성한후 다시 컴파일 합니다
//	  T와 관련 있는 코드의 에러 유무를 확인합니다.


template<typename T> void foo(T a)
{
//	goo();  // error
	goo(a);
}
int main()
{
	foo(10);
}