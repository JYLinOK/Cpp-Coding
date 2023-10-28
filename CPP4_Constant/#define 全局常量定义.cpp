#include<iostream>

using namespace std;

/// <summary>
/// 全局常量在全局范围中定义
/// 通过#define关键字直接定义
/// #define关键字定义常量最后不用加分号
/// 全局常量一般定义为全大写，名称后面直接跟值，不用=号
/// </summary>

#define G_STRING "This is a global string const"

void example_define_global_const()
{
	
	cout << "G_STRING = " << G_STRING << ",  G_STRING 的类型为：" << typeid(G_STRING).name() << endl;

}