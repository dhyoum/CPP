# Modern C++
#### Legacy grammer
- function pointer
```c
void (*f)(int);
```
- member function pointer
```c
  void (Class:*f) (int);
  Dialog dlg; (dlg.* f)(20);
  Dialog* pDlg; (pDlg->* f)(20);
```
- placement new : 메모리 할당없이 생성자만 호출하고 싶을때 사용함.
```c
  // void* operator new(size_t sz, void* p) { return p; } c++ 표준에 있음
  Point* p = static_cast<Point*>(operator new(sizeof(Point))); // allocate memory
  new(p) Point();     // call initializer 
  p->~Point();        // call destructor
  operator delete(p);  // dealloc memory
```
```c
  Point* p1 = new Point(0, 0);
  Point* p2 = static_cast<Point*>(operator new(sizeof(Point) * 10));
  for (int i = 0; i < 10; i++)
    new (&p2[i]) Point(0, 0);
  for (int i = 0; i < 10; i++)
    p2[i].~Point();
  operator delete(p2);
```
### Rvalue reference
- temporary variable
- RVO
- RAII ( ownership )
### Move semantics
- ownership move
- casting
- POD / trivial
### Universal reference
### Perfect forwarding
- what is the concept of forwarding ?
### Smart pointer
- RAII again
- polymophism
- unique_ptr : [how to implement for pImpl idiom?](https://www.fluentcpp.com/2017/09/22/make-pimpl-using-unique_ptr/) 
- shared_ptr : [how to cast?](https://stackoverflow.com/questions/1358143/downcasting-shared-ptrbase-to-shared-ptrderived)
### Lambda function
- review the global function
- how to capture ?
- [closure](https://en.wikipedia.org/wiki/Closure_(computer_programming))
- free variable
### auto
- how to check the type deduction ?
### const / constexpr
- compile time constant
- constexpr constructor
### Uniform initialize 
- [Initialization](https://en.cppreference.com/w/cpp/language/initialization)
### initailzer_list
Initializer lists may be implemented as a pair of pointers or pointer and length. Copying a std::initializer_list does not copy the underlying objects.
### [user define literal](https://en.cppreference.com/w/cpp/language/user_literal)
```c
Meter operator""m (unsigned long long n) {
	cout << "operator m" << endl;
	Meter m(n);
	return m;
}
Meter v = 10m;	// operator""m(10) 을 호출함. 일반 개발자는 _ 로 시작하는 literal 를 만들어야 한다.
                // 가급적 사용하지 말자.
```

### type_traits
```c
std::is_polymorphic<T>
```


### if init ( after C++17 )
```c
if (int ret = foo(); ret == 0)
  cout << "ret is 0" << endl;
  
switch(int n=foo(); n){
  case 0:break;
  case 1:break;
}
```
### if constexpr ( after C++17 )
```c
template<typename T> void printv(T v) {
  if consexpr (is_pointer<T>::value)
    cout << v << " : " << *v << endl;
  else
    cout << v << " : " << v << endl;
```
### structure binding
```c
Point pt = {1,2};  auto [a,b] = pt;  auto& [rx, ry] = pt;
int x[2] = {1,2}; auto [e1, e2] = x;
tuple<int, short, double> t3(1,2,3.4); auto[a1, a2, a3] = t3;
```
### thread
### mutex, condition_variable, atomic
### future, promise, packaged_task
### boost::optional, boost::variant, boost:fibers

### link
- [cpp core guide](http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)
- [cpprefernece](https://en.cppreference.com/w/)
- [modoo](https://modoocode.com/135)
- [soen](http://soen.kr/)
- [mingw](https://nuwen.net/)
