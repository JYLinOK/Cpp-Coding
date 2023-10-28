#include<iostream>

using namespace std;


void example_long()
{
	long long_1 = 1;
	long long_2 = 10;
	long long_3 = 100;

	cout << "long_1 = " << long_1 << "， long_1 的类型为：" << typeid(long_1).name() << "， long_1 的字节长度为 sizeof(long_1) = " << sizeof(long_1) << endl;
	cout << "long_2 = " << long_2 << "， long_2 的类型为：" << typeid(long_2).name() << "， long_2 的字节长度为 sizeof(long_2) = " << sizeof(long_2) << endl;
	cout << "long_3 = " << long_3 << "， long_3 的类型为：" << typeid(long_3).name() << "， long_3 的字节长度为 sizeof(long_3) = " << sizeof(long_3) << endl;

	cout << "long_1 * long_2 * long_3 = " << long_1 * long_2 * long_3 << endl;

}