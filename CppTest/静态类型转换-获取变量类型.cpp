#include<iostream>

using namespace std;

//C++ 有四种类型转换，分别为：静态转换、动态转换、常量转换和重新解释转换。
//静态转换是将一种数据类型的值强制地转换为另一种数据类型的值，是一种强制转换。
//静态转换通常用于比较类型相似的对象之间的转换，例如将 int 类型转换为 float 类型。
//C++ 编译在进行静态转换不进行任何运行时类型检查，因此可能会导致程序运行时错误。


void example_static_cast()
{
	int i = 1;
	float f_i = static_cast<float>(i);
	double d_i = static_cast<double>(i);

	cout << "i = " << i << ", i 的数据类型为 " << typeid(i).name() << "\n";
	cout << "f_i = " << f_i << ", f_i 的数据类型为 " << typeid(f_i).name() << "\n";
	cout << "d_i = " << d_i << ", d_i 的数据类型为 " << typeid(d_i).name() << "\n";

}