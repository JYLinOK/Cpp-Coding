#include<iostream>

using namespace std;

void example_const_int()
{
	const int const_int1 = 123;
	const int const_int2 = 123l;
	const int const_int3 = 123u;
	const int const_int4 = 123ul;
	const int const_int5 = 0123;
	const int const_int6 = 0x123;
	const int const_int7 = 0xabc;

	cout << "const_int1 = " << const_int1 << ",  const_int1的类型为：" << typeid(const_int1).name() << endl;
	cout << "const_int2 = " << const_int2 << ",  const_int2的类型为：" << typeid(const_int2).name() << endl;
	cout << "const_int3 = " << const_int3 << ",  const_int3的类型为：" << typeid(const_int3).name() << endl;
	cout << "const_int4 = " << const_int4 << ",  const_int4的类型为：" << typeid(const_int4).name() << endl;
	cout << "const_int5 = " << const_int5 << ",  const_int5的类型为：" << typeid(const_int5).name() << endl;
	cout << "const_int6 = " << const_int6 << ",  const_int6的类型为：" << typeid(const_int6).name() << endl;
	cout << "const_int7 = " << const_int7 << ",  const_int7的类型为：" << typeid(const_int7).name() << endl;

}