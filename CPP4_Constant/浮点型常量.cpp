#include<iostream>

using namespace std;

void example_const_float()
{
	const float const_float1 = 1.0;
	const float const_float2 = 1e-1L;
	const float const_float3 = 1e-2L;
	const float const_float4 = 1e-3L;
	const float const_float5 = 3e-1L;
	const float const_float6 = 3e-2L;
	const float const_float7 = 3e-3L;

	const float const_float8 = 1e-3L;
	const float const_float9 = 12e-3L;
	const float const_float10 = 123e-3L;
	const float const_float11 = 1234e-3L;
	const float const_float12 = 12345e-3L;
	const float const_float13 = 123456e-3L;

	cout << "const_float1 = " << const_float1 << ",  const_float1的类型为：" << typeid(const_float1).name() << endl;
	cout << "const_float2 = " << const_float2 << ",  const_float2的类型为：" << typeid(const_float2).name() << endl;
	cout << "const_float3 = " << const_float3 << ",  const_float3的类型为：" << typeid(const_float3).name() << endl;
	cout << "const_float4 = " << const_float4 << ",  const_float4的类型为：" << typeid(const_float4).name() << endl;
	cout << "const_float5 = " << const_float5 << ",  const_float5的类型为：" << typeid(const_float5).name() << endl;
	cout << "const_float6 = " << const_float6 << ",  const_float6的类型为：" << typeid(const_float6).name() << endl;
	cout << "const_float7 = " << const_float7 << ",  const_float7的类型为：" << typeid(const_float7).name() << endl;

	cout << "\n";

	cout << "const_float8 = " << const_float8 << ",  const_float8的类型为：" << typeid(const_float8).name() << endl;
	cout << "const_float9 = " << const_float9 << ",  const_float9的类型为：" << typeid(const_float9).name() << endl;
	cout << "const_float10 = " << const_float10 << ",  const_float10的类型为：" << typeid(const_float10).name() << endl;
	cout << "const_float11 = " << const_float11 << ",  const_float11的类型为：" << typeid(const_float11).name() << endl;
	cout << "const_float12 = " << const_float12 << ",  const_float12的类型为：" << typeid(const_float12).name() << endl;
	cout << "const_float13 = " << const_float13 << ",  const_float13的类型为：" << typeid(const_float13).name() << endl;

}