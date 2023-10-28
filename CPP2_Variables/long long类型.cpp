#include<iostream>

using namespace std;


void example_longlong()
{
	long long longlong_1 = 10000000000;
	long long longlong_2 = 20000000000;
	long long longlong_3 = 100000000000;

	cout << "longlong_1 = " << longlong_1 << "， longlong_1 的类型为：" << typeid(longlong_1).name() << "， longlong_1 的字节长度为 sizeof(longlong_1) = " << sizeof(longlong_1) << endl;
	cout << "longlong_2 = " << longlong_2 << "， longlong_2 的类型为：" << typeid(longlong_2).name() << "， longlong_2 的字节长度为 sizeof(longlong_2) = " << sizeof(longlong_2) << endl;
	cout << "longlong_3 = " << longlong_3 << "， longlong_3 的类型为：" << typeid(longlong_3).name() << "， longlong_3 的字节长度为 sizeof(longlong_3) = " << sizeof(longlong_3) << endl;

	cout << "longlong_1 * longlong_2 * longlong_3 = " << longlong_1 * longlong_2 * longlong_3 << endl;

}