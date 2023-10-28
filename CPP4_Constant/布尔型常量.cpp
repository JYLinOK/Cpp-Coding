#include<iostream>

using namespace std;

void example_const_bool()
{
	const bool const_true  = true;
	const bool const_false = false;

	cout << "const_true = " << const_true << ",  const_true的类型为：" << typeid(const_true).name() << endl;
	cout << "const_false = " << const_false << ",  const_false的类型为：" << typeid(const_false).name() << endl;

}