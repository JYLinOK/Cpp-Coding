#include<iostream>

using namespace std;


void example_short()
{
	short short_1 = 1;
	short short_2 = 10;
	short short_3 = 100;

	cout << "short_1 = " << short_1 << "， short_1 的类型为：" << typeid(short_1).name() << "， short_1 的字节长度为 sizeof(short_1) = " << sizeof(short_1) << endl;
	cout << "short_2 = " << short_2 << "， short_2 的类型为：" << typeid(short_2).name() << "， short_2 的字节长度为 sizeof(short_2) = " << sizeof(short_2) << endl;
	cout << "short_3 = " << short_3 << "， short_3 的类型为：" << typeid(short_3).name() << "， short_3 的字节长度为 sizeof(short_3) = " << sizeof(short_3) << endl;

	cout << "short_1 * short_2 * short_3 = " << short_1 * short_2 * short_3 << endl;

}