#include<iostream>

using namespace std;

/// <summary>
/// 32 = 4*8 : 四个字节长度
/// </summary>

void example_char32_t()
{
	char32_t c32_1 = '中';
	char32_t c32_2 = '国';
	char32_t c32_3 = '字';

	cout << "c32_1 = " << c32_1 << ", c32_1 类型为：" << typeid(c32_1).name() << "， c32_1 的字节长度为 sizeof(c32_1) = " << sizeof(c32_1) << endl;
	cout << "c32_2 = " << c32_2 << ", c32_2 类型为：" << typeid(c32_2).name() << "， c32_2 的字节长度为 sizeof(c32_2) = " << sizeof(c32_2) << endl;
	cout << "c32_3 = " << c32_3 << ", c32_3 类型为：" << typeid(c32_3).name() << "， c32_3 的字节长度为 sizeof(c32_3) = " << sizeof(c32_3) << endl;

	cout << uint8_t(c32_1) << endl;


}