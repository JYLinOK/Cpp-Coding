#include<iostream>

using namespace std;

void example_typeof()
{
	cout << "例子：typedef 声明_为已有的类型名取别名.cpp" << "\n";

	int a = 123;

	cout << "a = " << a << endl;

	typedef int define_int;

	define_int b = 456;

	cout << "b = " << b << endl;

}
