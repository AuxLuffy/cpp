#include <iostream>
using namespace std;
/**
 * @brief 引用练习
 * 引用必须初始化
 * 引用一旦初始化后就不可更改了
 * 引用的本质在c++内部其实就是一个指针常量
 * 
 *
 */
void test()
{
    int a = 10;
    int &b = a;
    cout << "初始值：" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    b = 100;
    cout << "更改后：" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}

/**
 * @brief 交换两个数的值
 *
 * @param ref1
 * @param ref2
 */
void swap(int &ref1, int &ref2)//类似int * const ref1 = &a;
{
    int temp = ref1;
    ref1 = ref2;//转义就是*ref1 = *ref2
    ref2 = temp;
}

void testSwap(){
    int a = 2;
    int b = 3;
    cout << "初始值：" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    swap(a, b);
    cout << "初始值：" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}
/**
 * @brief 测试引用类型 作为返回值
 * 局部变量作为引用变量返回会报错
 * 返回值为引用的函数可以作为函数左值
 * @return int& 
 */
int &testRefReturn(){
    static int a = 10;
    return a;
}
int main()
{
    // test();
    // testSwap();
    int &b = testRefReturn();
    cout << "b=" << b << endl;
    cout << "b=" << b << endl;
    testRefReturn() = 121212;
    cout << "b=" << b << endl;
    return 0;
}