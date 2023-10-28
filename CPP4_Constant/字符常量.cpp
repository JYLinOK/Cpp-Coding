#include<iostream>

using namespace std;

void example_const_char()
{
	const char const_char1 = '\\';	  // 反斜杠
	const char const_char2 = '\'';	  // 单引号
	const char const_char3 = '\"';	  // 双引号
	const char const_char4 = '\?';	  // 问号
	const char const_char5 = '\a';	  // 警报声号
	const char const_char6 = '\b';	  // 退格键
	const char const_char7 = '\f';	  // 换页符
	const char const_char8 = '\n';	  // 换行符
	const char const_char9 = '\r';	  // 回车
	const char const_char10 = '\t';	  // 水平制表符
	const char const_char11 = '\o';	  // 1位的八进制数 
	const char const_char12 = '\oo';  // 2位的八进制数 
	const char const_char13 = '\ooo'; // 3位的八进制数 

	cout << "const_char1 = "  << const_char1  << ",  const_char1 的类型为：" << typeid(const_char1).name() << endl;
	cout << "const_char2 = "  << const_char2  << ",  const_char2 的类型为：" << typeid(const_char2).name() << endl;
	cout << "const_char3 = "  << const_char3  << ",  const_char3 的类型为：" << typeid(const_char3).name() << endl;
	cout << "const_char4 = "  << const_char4  << ",  const_char4 的类型为：" << typeid(const_char4).name() << endl;
	cout << "const_char5 = "  << const_char5  << ",  const_char5 的类型为：" << typeid(const_char5).name() << endl;
	cout << "const_char6 = "  << const_char6  << ",  const_char6 的类型为：" << typeid(const_char6).name() << endl;
	cout << "const_char7 = "  << const_char7  << ",  const_char7 的类型为：" << typeid(const_char7).name() << endl;
	cout << "const_char8 = "  << const_char8  << ",  const_char8 的类型为：" << typeid(const_char8).name() << endl;
	cout << "const_char9 = "  << const_char9  << ",  const_char9 的类型为：" << typeid(const_char9).name() << endl;
	cout << "const_char10 = " << const_char10 << ",  const_char10的类型为：" << typeid(const_char10).name() << endl;
	cout << "const_char11 = " << const_char11 << ",  const_char11的类型为：" << typeid(const_char11).name() << endl;
	cout << "const_char12 = " << const_char12 << ",  const_char12的类型为：" << typeid(const_char12).name() << endl;
	cout << "const_char13 = " << const_char13 << ",  const_char13的类型为：" << typeid(const_char13).name() << endl;


}