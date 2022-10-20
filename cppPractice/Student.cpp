#include <iostream>
#include <string>
using namespace std;
//实例化对象

// class 类关键字、Student 类名
class Student
{
    // 访问限制符 - 公有属性
public:
    Student() {}    // 构造函数
    ~Student() {}   // 析构函数

    // 成员函数
    inline void setName(string name) { this->name = name; }
    inline string getName() const { return name; };
    inline void setAge(int age) { this->age = age; }
    inline int getAge() const { return age; }
    // 访问限制符 - 私有属性
private:
    // 数据成员
    string name;
    int age;
};
//int main()
//{
//    // 栈上实例化
//    // 超出定义域对象资源会被系统回收
//    // 使用 “.” 来访问数据成员或成员函数
//    Student stu1;
//    stu1.setName("jake");
//    stu1.setAge(15);
//    cout << "My name is " << stu1.getName() << ", I'm " << stu1.getAge() << " years old." << endl;
//
//    // 堆上实例化
//    // 最后需要使用 delete 关键字来释放内存，否则会造成内存泄漏
//    // 使用 “->” 来访问数据成员或成员函数
//    Student* stu2 = new Student;
//    // 访问
//    stu2->setName("Siri");
//    stu2->setAge(5);
//    cout << "My name is " << stu2->getName() << ", I'm " << stu2->getAge() << " years old." << endl;
//    // 释放内存
//    delete stu2;
//    // 释放完内存后将对象置空，防止野指针
//    stu2 = nullptr;
//
//    return 0;
//}