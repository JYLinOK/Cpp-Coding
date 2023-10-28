#include<iostream>

using namespace std;

/// <summary>
/// C++中的true用数字1表示，false用数字0表示，但其本质类型仍然是 bool型
/// </summary>

void example_bool()
{
	//布尔变量
	bool flag_true = true;
	bool flag_fasle = false;

	cout << "flag_true = " << flag_true << ", flag_true的类型是："    << typeid(flag_true).name() << "， flag_true  的字节长度为 sizeof(flag_true ) = " << sizeof(flag_true) << endl;
	cout << "flag_fasle = " << flag_fasle << ", flag_fasle的类型是：" << typeid(flag_fasle).name() << "， flag_fasle 的字节长度为 sizeof(flag_fasle) = " << sizeof(flag_fasle) << endl;
	cout << "flag_fasle == 0 : " << (flag_fasle == 0) << endl;
	cout << "flag_true == 1 : " << (flag_true == 1) << endl;
	cout << "\n";

	if (flag_true == 1) {
		cout << "flag_true = 1" << endl;
	}

	if (flag_fasle == 0) {
		cout << "flag_fasle = 0" << endl;
	}

	cout << "\n";

	// true和false的本质类型仍然是 bool型
	if (typeid(flag_true).name() == typeid(1).name()) {
		cout << "true的数据类型与数字1一样" << endl;
	}
	else {
		cout << "true的数据类型与数字1不一样" << endl;
	}

	if (typeid(flag_fasle).name() == typeid(0).name()) {
		cout << "true的数据类型与数字1一样" << endl;
	}
	else {
		cout << "true的数据类型与数字1不一样" << endl;
	}

	//if语句可以直接使用1和0来分别表示true和false
	//大于0的数字都可以代表true，小于0的数字都可以代表false
	cout << "\n";

	if (1) {
		cout << "数字1可以代替true用在if语句中做肯定判断" << endl;
	}

	if (-1) {
		cout << "数字-1可以代替false用在if语句中做否定判断" << endl;
	}
	else {
		cout << "数字-1不可以代替false用在if语句中做否定判断" << endl;
	}

	if (2) {
		cout << "数字2可以代替true用在if语句中做肯定判断" << endl;
	}

	cout << "\n";

	for (int i = -10; i < 0; i++) {
		if (i) {
			cout << "数字" << i << "可以代替false用在if语句中做否定判断" << endl;
		}
	}

	cout << "\n";

	for (int i = 0; i < 10; i++) {
		if (i) {
			cout << "数字" << i << "可以代替true用在if语句中做肯定判断" << endl;
		}
	}

}

