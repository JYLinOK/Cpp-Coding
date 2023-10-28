#include<iostream>

using namespace std;


class class_A {
	public:
		static int id;
		float score;
};

int class_A::id = 1;  // 可以在全局范围内定义类的成员的值


void example_class_scope()
{
	//int class_A::id = 1;  // 不能在局部范围内定义类的成员的值
	cout << "class_A::id = " << class_A::id << endl;  // 可以直接访问未实例化的类的公共成员值

}