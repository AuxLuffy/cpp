#include <iostream>
using namespace std;
/**
 * @brief 注意：一个参数有默认值后，后面参数都要有默认值，否则程序无法识别哪一个是默认值
 *
 * @param a
 * @param b
 * @param c
 * @return int
 */
int func(int a, int b = 3, int c = 2)
{
    return a + b + c;
}

int main()
{
    cout << func(1, 2) << endl;
}