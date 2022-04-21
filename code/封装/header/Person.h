#program once //防止头文件被多次包含
#include <iostream>
using namespace std;
/**
 * 头文件中只保留成员变量和成员方法的声明， 以分号结尾
 */

class Person
{
public:
    void setName(string name);

    void setAge(int age);

    int getAge();

    string getName();

private:
    int age;
    string name;

private:
    Person();

public:
    Person(int age, string name);
};
