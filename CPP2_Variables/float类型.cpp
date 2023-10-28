#include<iostream>

using namespace std;


void example_float()
{
	float f_0 = 1.0;

	float f_1 = 1.0f;
	float f_2 = 2.3f;
	float f_3 = 3.33f;

	cout << "f_0 = " << f_0 << "， f_0 的类型为：" << typeid(f_0).name() << endl;

	cout << "f_1 = " << f_1 << "， f_1 的类型为：" << typeid(f_1).name() << endl;
	cout << "f_2 = " << f_2 << "， f_2 的类型为：" << typeid(f_2).name() << endl;
	cout << "f_3 = " << f_3 << "， f_3 的类型为：" << typeid(f_3).name() << endl;

	cout << "f_1 * f_2 * f_3  = " << f_1 * f_2 * f_3 << endl;
	cout << "\n";

	// 在新标准中，定义float变量不用在初始值的后面加f.
	// 定义的float变量的初始值也可以没有小数点.
	float f_4 = 4;  
	float f_5 = 5.0;
	float f_6 = 6.1;

	cout << "f_4 = " << f_4 << "， f_4 的类型为：" << typeid(f_4).name() << endl;
	cout << "f_5 = " << f_5 << "， f_5 的类型为：" << typeid(f_5).name() << endl;
	cout << "f_6 = " << f_6 << "， f_6 的类型为：" << typeid(f_6).name() << endl;

}