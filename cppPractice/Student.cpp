#include <iostream>
#include <string>
using namespace std;
//ʵ��������

// class ��ؼ��֡�Student ����
class Student
{
    // �������Ʒ� - ��������
public:
    Student() {}    // ���캯��
    ~Student() {}   // ��������

    // ��Ա����
    inline void setName(string name) { this->name = name; }
    inline string getName() const { return name; };
    inline void setAge(int age) { this->age = age; }
    inline int getAge() const { return age; }
    // �������Ʒ� - ˽������
private:
    // ���ݳ�Ա
    string name;
    int age;
};
//int main()
//{
//    // ջ��ʵ����
//    // ���������������Դ�ᱻϵͳ����
//    // ʹ�� ��.�� ���������ݳ�Ա���Ա����
//    Student stu1;
//    stu1.setName("jake");
//    stu1.setAge(15);
//    cout << "My name is " << stu1.getName() << ", I'm " << stu1.getAge() << " years old." << endl;
//
//    // ����ʵ����
//    // �����Ҫʹ�� delete �ؼ������ͷ��ڴ棬���������ڴ�й©
//    // ʹ�� ��->�� ���������ݳ�Ա���Ա����
//    Student* stu2 = new Student;
//    // ����
//    stu2->setName("Siri");
//    stu2->setAge(5);
//    cout << "My name is " << stu2->getName() << ", I'm " << stu2->getAge() << " years old." << endl;
//    // �ͷ��ڴ�
//    delete stu2;
//    // �ͷ����ڴ�󽫶����ÿգ���ֹҰָ��
//    stu2 = nullptr;
//
//    return 0;
//}