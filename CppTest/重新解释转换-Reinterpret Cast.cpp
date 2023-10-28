#include<iostream>

using namespace std;

/// <summary>
/// 重新解释转换：目的是进行不同数据类型的变量值之间的转换。
/// C++编译器对该转换不会进行任何形式的类型检查，所以容易导致未知风险。
/// 这种转换一般不准确。
/// </summary>


void example_reinterpret_cast()
{
	//小类型转大类型
	int i = 123;
	float f_i = reinterpret_cast<float&>(i);  // 转换参数也是传引用类型
	double d_i = reinterpret_cast<double&>(i);  // 转换参数也是传引用类型

	cout << "i = " << i << ", i的类型为: " << typeid(i).name() << endl;
	cout << "f_i = " << f_i << ", f_i的类型为: " << typeid(f_i).name() << endl;
	cout << "d_i = " << d_i << ", d_i的类型为: " << typeid(d_i).name() << endl;

	//大类型转小类型
	double d = 1.23;
	float f_d = reinterpret_cast<float&>(d);  // 转换参数也是传引用类型
	int i_d = reinterpret_cast<int&>(d);  // 转换参数也是传引用类型

	cout << "\n";
	cout << "f_d = " << f_d << ", f_d的类型为: " << typeid(f_d).name() << endl;
	cout << "i_d = " << i_d << ", i_d的类型为: " << typeid(i_d).name() << endl;
}