#include "Person.h"
void Person::setName(string name)
{
    this->name = name;
}

void Person::setAge(int age)
{
    this->age = age;
}

int Person::getAge()
{
    return age;
}

string Person::getName()
{
    return name;
}
Person::Person(){
    cout<<"默认无参构造"<<endl;
}

Person::Person(String name, int age){
    this->age = age;
    this->name = name;
    cout<<"默认有参构造"<<endl;
}