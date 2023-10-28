#include<iostream>

using namespace std;

/// <summary>
/// 定义double变量也是直接通过关键字：double定义。
/// </summary>

void example_double()
{
	double d_0 = 1;
	double d_1 = 1.0;
	double d_2 = 2.3;
	double d_3 = 3.33;

	cout << "d_0 = " << d_0 << "， d_0 的类型为：" << typeid(d_0).name() << "， d_0 的字节长度为 sizeof(d_0) = " << sizeof(d_0) << endl;
	cout << "d_1 = " << d_1 << "， d_1 的类型为：" << typeid(d_1).name() << "， d_1 的字节长度为 sizeof(d_1) = " << sizeof(d_1) << endl;
	cout << "d_2 = " << d_2 << "， d_2 的类型为：" << typeid(d_2).name() << "， d_2 的字节长度为 sizeof(d_2) = " << sizeof(d_2) << endl;
	cout << "d_3 = " << d_3 << "， d_3 的类型为：" << typeid(d_3).name() << "， d_3 的字节长度为 sizeof(d_3) = " << sizeof(d_3) << endl;

	cout << "d_1 * d_2 * d_3 = " << d_1 * d_2 * d_3 << endl;
	cout << "typeid(d_1 * d_2 * d_3).name() = " << typeid(d_1 * d_2 * d_3).name() << endl;
	cout << "\n";

}