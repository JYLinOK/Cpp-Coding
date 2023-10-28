#include<iostream>

using namespace std;


void example_int()
{
	int i_1 = 1;
	int i_2 = 10;
	int i_3 = 100;

	cout << "i_1 = " << i_1 << "， i_1 的类型为：" << typeid(i_1).name() << "， i_1 的字节长度为 sizeof(i_1) = " << sizeof(i_1) << endl;
	cout << "i_2 = " << i_2 << "， i_2 的类型为：" << typeid(i_2).name() << "， i_2 的字节长度为 sizeof(i_2) = " << sizeof(i_2) << endl;
	cout << "i_3 = " << i_3 << "， i_3 的类型为：" << typeid(i_3).name() << "， i_3 的字节长度为 sizeof(i_3) = " << sizeof(i_3) << endl;


	cout << "i_1 * i_2 * i_3  = " << i_1 * i_2 * i_3 << endl;

}