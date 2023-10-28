#include<iostream>

using namespace std;

void example_const_string()
{
	const string const_string1 = "This is a const string";	  
	//const_string1 = "New string";  // 不能给常量重新赋值


	cout << "const_string1 = " << const_string1 << ",  const_string1 的类型为：" << typeid(const_string1).name() << endl;
	

}