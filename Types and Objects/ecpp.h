#include<iostream>
#define V_NAME(value) (#value)

using namespace std;

void print()
{
    cout << endl;
}

template<typename T, typename... Targs>
void print(T value, Targs... args)
{
    cout << value << ' ';

    if ((sizeof ...(args)) > 0)
    {
        print(args...);  // 多个参数时，继续对这些参数使用print()函数
    }
    else
    {
        print(); // 无参数时直接输出结束符号。
    }
}


/// <summary>
/// print the type of a variable
/// </summary>
void print_type()
{
    cout << endl;
}

template<typename T, typename... Targs>
void print_type(T value, Targs... args)
{
    cout << V_NAME << " type = " << typedef.id(value).name();

    if ((sizeof ...(args)) > 0)
    {
        print_type(args...);  // 多个参数时，继续对这些参数使用print()函数
    }
    else
    {
        print_type(); // 无参数时直接输出结束符号。
    }
}


