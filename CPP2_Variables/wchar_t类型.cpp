#include<iostream>

using namespace std;

void example_wchar_t()
{
	// char c1 = '中';  // C++中，char类型只能表示256个字符，每个字符占8位bit，其中不包括汉字
	// 所以要表示汉字或者别的特殊字符，或Unicode编码字符，需要使用wchar_t宽字符变量类型
	// wchar_t变量类型，一个字符占两个字节，也就是占16位
	wchar_t wc1 = '中';  
	wchar_t wc2 = '国';
	wchar_t wc3 = '字';

	//cout << "c1 = " << c1 << ", c1 类型为：" << typeid(c1).name() << "， c1 的字节长度为 sizeof(c1) = " << sizeof(c1) << endl;

	cout << "wc1 = " << wc1 << ", wc1 类型为：" << typeid(wc1).name() << "， wc1 的字节长度为 sizeof(wc1) = " << sizeof(wc1) << endl;
	cout << "wc2 = " << wc2 << ", wc2 类型为：" << typeid(wc2).name() << "， wc2 的字节长度为 sizeof(wc2) = " << sizeof(wc2) << endl;
	cout << "wc3 = " << wc3 << ", wc3 类型为：" << typeid(wc3).name() << "， wc3 的字节长度为 sizeof(wc3) = " << sizeof(wc3) << endl;

	cout << uint8_t(wc1) << endl;


	string s("\u2261");
	cout << s << endl;


}