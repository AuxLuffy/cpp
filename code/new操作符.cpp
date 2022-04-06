#include <iostream>
using namespace std;
/**
 * @brief 测试int堆数据
 *
 */
void testHeapInt()
{
    int *p = new int(10);
    cout << "p = " << *p << endl;
    cout << "p = " << *p << endl;
    cout << "p = " << *p << endl;
    delete p; // delete还是能访问的，只是释放了堆中的空间，并不会将指针p的值置为NULL，
    // 所以p仍然指向堆中对应的位置，但注意这个位置已经被回收了，
    // 可以随时被分配给别的对象，所以delete后最后将指针置为NULL
    p = NULL;
    cout << "p = " << *p << endl; //内存已被释放，再次访问就是非法操作，会报错 segmentation fault
    cout << "p = " << *p << endl;
}
/**
 * @brief 测试堆数组
 * 与普通变量的区别是它释放数据的方式
 */
void testHeapArr()
{
    int *arr = new int[10];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 14;
    arr[4] = 15;
    arr[5] = 16;
    arr[6] = 13;
    arr[7] = 14;
    cout << "刚创建时：" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    delete[] arr; //需要加上[], 要不然它只会释放第一个元素
    arr = NULL;   //同时记得置空
    cout << "释放后：" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
}

int main()
{
    // testHeapInt();
    testHeapArr();
}