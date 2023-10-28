#include<iostream>

using namespace std;

/// <summary>
/// 局部变量就是局部作用域内定义的变量，只能在改作用域内直接取值使用
/// 广义上，所有变量都是局部变量，因为都有一个确定的使用范围
/// 全局变量时特殊的局部变量
/// 大范围的局部变量可以在小范围中被调用
/// 小范围的局部变量不能在大范围中被调用
/// </summary>

//定义全局变量
int a = 123;

int i;
char c;
double d;
float f;
long l;
long long ll;


void example_local_global() {

	cout << "i = " << i << endl;  // 定义全局变量不一定需要初始化值
	cout << "c = " << c << endl;  // 定义全局变量不一定需要初始化值
	cout << "d = " << d << endl;  // 定义全局变量不一定需要初始化值
	cout << "f = " << f << endl;  // 定义全局变量不一定需要初始化值
	cout << "l = " << l << endl;  // 定义全局变量不一定需要初始化值
	cout << "ll = " << ll << endl;  // 定义全局变量不一定需要初始化值
	
	a = 456;
	//大范围定义的全局变量可以被小范围的局部调用
	cout << "a = " << a << ", -> 小范围调用大范围变量有效" << endl;

	if (1)
	{
		int b = 789;  // if语句括号内的为局部范围：小范围
	}

	//cout << "b = " << b << endl;  // 小范围内定义的变量不能再大范围中直接调用

	//int b; 
	//cout << "b = " << b << endl;  // 定义局部变量需要初始化值
}