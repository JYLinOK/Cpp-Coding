#include<iostream>

using namespace std;

/// <summary>
/// 常量转换：只能将常量转为变量
/// </summary>

void example_const_cast()
{
	const int i = 1;
	//i = 2;  // 由于i是常量，所以不能直接赋其他值
	//i = 1;  // 由于i是常量，所以就算赋值改常量本身的值也不行，->常量不能通过=号再次赋值

	//直接转换为本身对应的整型 变量
	//int v_i = const_cast<int>(i);  // 出错：const_cast常量转换的<类型>只能是类型的引用

	int& v_i = const_cast<int&>(i);
	cout << "i = " << i << ", i 的类型为 " << typeid(i).name() << endl;

	//转换double
	//double& v_i = const_cast<double&>(i);  // 出错：常量转变量时，不能改变常量的基本类型，此处为int
	double d_i = static_cast<double>(const_cast<int&>(i));  // 先用const_cast将常量转变量，再用static_cast直接转换类型
	cout << "d_i = " << d_i << ", d_i 的类型为 " << typeid(d_i).name() << endl;



}