#include<iostream>

using namespace std;

/// <summary>
/// 16 = 2*8 : 两个字节长度
/// </summary>

void example_char16_t()
{
	char16_t c16_1 = '中';
	char16_t c16_2 = '国';
	char16_t c16_3 = '字';

	cout << "c16_1 = " << c16_1 << ", c16_1 类型为：" << typeid(c16_1).name() << "， c16_1 的字节长度为 sizeof(c16_1) = " << sizeof(c16_1) << endl;
	cout << "c16_2 = " << c16_2 << ", c16_2 类型为：" << typeid(c16_2).name() << "， c16_2 的字节长度为 sizeof(c16_2) = " << sizeof(c16_2) << endl;
	cout << "c16_3 = " << c16_3 << ", c16_3 类型为：" << typeid(c16_3).name() << "， c16_3 的字节长度为 sizeof(c16_3) = " << sizeof(c16_3) << endl;

	cout << uint8_t(c16_1) << endl;


	string s("\u2261");
	cout << s << endl;


}