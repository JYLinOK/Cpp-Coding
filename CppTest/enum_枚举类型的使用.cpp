#include<iostream>

using namespace std;

void example_enum()
{
	cout << "例子：enum_枚举类型的使用.cpp" << "\n";

	// 枚举其实就是自动编排序号，如果没有直接定义，则第一位从0开始，a1=0, a2=1, a3=2；
	enum aArray {a1, a2, a3} enum_array;  

	enum_array = a1;  // 枚举类型变量必须先赋值再调用
	cout << "enum_array = " << enum_array << endl;

	// 枚举其实就是自动编排序号，如果有直接定义，则自动根据以编排位置的序号编排右边位置的序号
	// 枚举确定值后，只会作用右边的值，不会作用左边的值
	enum aArray2 { a4, a5=8, a6 } enum_array2; 

	enum_array2 = a4;  // 枚举类型变量必须先赋值再调用
	cout << "enum_array2 = a4;\n";
	cout << "enum_array2 = " << enum_array2 << "\n";

	enum_array2 = a6;  // 枚举类型变量必须先赋值再调用
	cout << "enum_array2 = a6;\n";
	cout << "enum_array2 = " << enum_array2 << endl;

	enum aArray3 { b0, b1, b2=8, b3, b4, b5 } enum_array3;
	enum_array3 = b0;
	cout << "\nenum_array3 = b0;\n";
	cout << "enum_array3 = " << enum_array3;

	enum_array3 = b1;
	cout << "\nenum_array3 = b1;\n";
	cout << "enum_array3 = " << enum_array3;

	enum_array3 = b2;
	cout << "\nenum_array3 = b2;\n";
	cout << "enum_array3 = " << enum_array3;

	enum_array3 = b3;
	cout << "\nenum_array3 = b3;\n";
	cout << "enum_array3 = " << enum_array3;

	enum_array3 = b4;
	cout << "\nenum_array3 = b4;\n";
	cout << "enum_array3 = " << enum_array3;

	enum_array3 = b5;
	cout << "\nenum_array3 = b5;\n";
	cout << "enum_array3 = " << enum_array3 << endl;

}