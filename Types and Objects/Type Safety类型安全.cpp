#include<iostream>

using namespace std;


void e_type_safety()
{
	cout << "测试-Type Safety类型安全.cpp";

	//变量定义后要初始化
	//如果变量尚未初始化就使用，被认为是不安全的

	double d1 = 2;
	//double d2;

	cout << "d1 = " << d1 << endl;  // 安全
	//cout << "d2 = " << d2 << endl;  // 不安全 错误：使用了未初始化的局部变量“d2”


}

