#include<iostream>

using namespace std;

/// <summary>
/// 动态类型转换比静态类型转化更加严格
/// 动态类型转换只能用于父类与子类之间的转换
/// </summary>


//父类
class Father
{
	void fun1() {};
};
class Father2
{
	virtual void fun1() {};
};

//子类
class Son : public Father
{
	void fun2() {};
};

class Son2 : public Father2
{
	virtual	void fun2() {};
};


void example_dynamic_cast()
{
	//实例化类
	Father* father = NULL;
	Son* son = NULL;

	//子类转父类
	Father* son2father = dynamic_cast<Father*>(son);

	cout << "type of son2father = " << typeid(son2father).name() << endl;

	//父类转子类
	//Son* father2son = dynamic_cast<Son*>(father); // 这里不能直接使用father,()括号里面的参数要求是多态类型
	
	//新建子类的引用连接到父类的变量
	//注意父类转子类，父类子类的函数都要用virtual修饰
	Father2* father2 = new Son2;
	Son2* father2son = dynamic_cast<Son2*>(father2); // 这里不能直接使用father,()括号里面的参数要求是多态类型

	cout << "type of father2son = " << typeid(father2son).name() << endl;

}