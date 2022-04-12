#include <iostream>
using namespace std;

int func(int = 10, int = 20, int = 30);
/**
 * @brief 注意：一个参数有默认值后，后面参数都要有默认值，否则程序无法识别哪一个是默认值
 *
 * @param a
 * @param b
 * @param c
 * @return int
 */
int func(int a, int b, int c)//声明中已经定义了默认值，实现中就不能再写了，否则会报错
{
    return a + b + c;
}

int main()
{
    cout << func(1, 2) << endl;
}