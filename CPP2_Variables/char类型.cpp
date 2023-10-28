#include<iostream>

using namespace std;

void example_char()
{
	char c1 = 'a';
	//char c2 = "b"; // C++不能使用双引号定义字符char

	char c2 = 'b';
	char c3 = 'c';

	cout << "c1 = " << c1 << ", c1 类型为：" << typeid(c1).name() << "， c1 的字节长度为 sizeof(c1) = " << sizeof(c1) << endl;
	cout << "c2 = " << c2 << ", c2 类型为：" << typeid(c2).name() << "， c2 的字节长度为 sizeof(c2) = " << sizeof(c2) << endl;
	cout << "c3 = " << c3 << ", c3 类型为：" << typeid(c3).name() << "， c3 的字节长度为 sizeof(c3) = " << sizeof(c3) << endl;




}