#include "Person.h"

// class Person
// {
// private:
//     string name;
//     int age;

// public:
//     void setName(string name)
//     {
//         this->name = name;
//     }
//     // private:
//     // Person(){
//     //     cout<< "无参构造调用"<<endl;
//     // }
// public:
//     Person(string name, int age)
//     {
//         (*this).name = name;
//         (*this).age = age;
//         cout << "有参构造调用" << endl;
//     }
//     ~Person()
//     {
//         cout << "析构函数调用" << endl;
//     }
// };

int main()
{
    // Person p;
    Person p("zero", 29);
    p.setName("luffy");

    return 0;
}