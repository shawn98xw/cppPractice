#include <iostream>
#include <string>
using namespace std;

//int main()
//{
//    // ��ʼ��
//    string s1 = "hello";
//    string s2 = "this is shiyanlou.";
//
//    // size() �� length() ���Ƿ����ַ����ĳ���
//    cout << "s1.size() = " << s1.size() << endl;
//    cout << "s1.length() = " << s1.length() << endl;
//
//    // ��Ҫע�� capacity() �Ƿ��� string �ĵ�ǰ������string ������һ�����飬���� capacity() ���صĳ��ȿ��ܻ���� size() ���� length() ���صĳ���
//    cout << "s1.capacity() = " << s1.capacity() << endl;
//
//    // s1.at(i) �� s1[i] ���Ƿ���λ�� i ���ַ�
//    cout << "s1.at(1) = " << s1.at(1) << endl;
//    cout << "s1[1] = " << s1[1] << endl;
//
//    // find() �鵽�ַ����ҵ������ַ���λ�ã����򷵻� -1
//    cout << "s1.find('e') = " << s1.find('e') << endl;
//    // ָ����ʼλ�ò鵽
//    cout << "s2.find(\"is\", 4) = " << s2.find("is", 4) << endl;
//    // �������
//    cout << "s2.rfind(\"is\") = " << s2.rfind("is") << endl;
//
//    // �ж��ַ����Ƿ�Ϊ��
//    if (s1.empty()) {
//        cout << "s1 is empty." << endl;
//    }
//    else {
//        cout << "s1 is not empty." << endl;
//    }
//
//    // �ж��ַ����Ƿ����
//    if (s1 == "hello") {
//        cout << "s1 == hello" << endl;
//    }
//    else {
//        cout << "s1 != hello" << endl;
//    }
//
//    // string --> int
//    string s3 = "1314";
//    cout << "stoi(s3) = " << stoi(s3) << endl;
//    // string --> float
//    string s4 = "3.1415";
//    cout << "stof(s4) = " << stof(s4) << endl;
//    return 0;
//}