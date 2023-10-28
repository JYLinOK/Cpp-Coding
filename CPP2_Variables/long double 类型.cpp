#include<iostream>

using namespace std;

void example_longdouble()
{
	long double ld_0 = 1;
	long double ld_1 = 1.0;
	long double ld_2 = 2.300000000002;  // 太过后面的小数值会被省略=2.3
	long double ld_3 = 3.3300000000000000001;  // 太过后面的小数值会被省略=3.33

	cout << "ld_0 = " << ld_0 << "， ld_0 的类型为：" << typeid(ld_0).name() << "， ld_0 的字节长度为 sizeof(ld_0) = " << sizeof(ld_0) << endl;
	cout << "ld_1 = " << ld_1 << "， ld_1 的类型为：" << typeid(ld_1).name() << "， ld_1 的字节长度为 sizeof(ld_1) = " << sizeof(ld_1) << endl;
	cout << "ld_2 = " << ld_2 << "， ld_2 的类型为：" << typeid(ld_2).name() << "， ld_2 的字节长度为 sizeof(ld_2) = " << sizeof(ld_2) << endl;
	cout << "ld_3 = " << ld_3 << "， ld_3 的类型为：" << typeid(ld_3).name() << "， ld_3 的字节长度为 sizeof(ld_3) = " << sizeof(ld_3) << endl;

	cout << "ld_1 * ld_2 * ld_3 = " << ld_1 * ld_2 * ld_3 << endl;
	cout << "typeid(ld_1 * ld_2 * ld_3).name() = " << typeid(ld_1 * ld_2 * ld_3).name() << endl;
	cout << "\n";

}