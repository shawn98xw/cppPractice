/// <summary>
/// ----------内存分区----------
/// 栈区      存储函数的参数、局部变量等
/// 堆区      由程序员分配、释放内存
/// 全局区    存储全局变量和静态变量
/// 常量区    存储常量
/// 代码区    存储逻辑代码的二进制
/// </summary>
#include "Line.h"

// 栈上实例化
void stackInstantiation() {
    // 实例化对象数组
    Point point[3];

    // 对象数组操作
    cout << "p[0]: (" << point[0].getX() << ", " << point[0].getY() << ")" << endl;
    cout << "p[1]: (" << point[1].getX() << ", " << point[1].getY() << ")" << endl;
    cout << "p[2]: (" << point[2].getX() << ", " << point[2].getY() << ")" << endl;
    point[0].setPoint(3, 4);
    cout << "p[0]: (" << point[0].getX() << ", " << point[0].getY() << ")" << endl;
}

// 堆上实例化
void heapInstantiatation() {
    Point* p = new Point[3];
    Point* point = p;
    cout << "point: (" << p->getX() << ", " << p->getY() << ")" << endl;
    p++;
    cout << "point: (" << p->getX() << ", " << p->getY() << ")" << endl;
    p++;
    cout << "point: (" << p->getX() << ", " << p->getY() << ")" << endl;
    point->setPoint(3, 4);
    cout << "point: (" << point->getX() << ", " << point->getY() << ")" << endl;
    cout << "p: (" << p->getX() << ", " << p->getY() << ")" << endl;

    // 释放内存
    delete[] point;
    point = nullptr;
}

//int main() {
//    // stackInstantiation();
//    // heapInstantiatation();
//
//    // 实例化
//    Line* line = new Line(1, 2, 3, 5);
//    // Line* line = new Line(Point(1, 2), Point(3, 5));
//
//    cout << "sizeof (p) = " << sizeof(line) << endl;
//    cout << "sizeof (Line) = " << sizeof(Line) << endl;
//
//    // 释放内存
//    delete line;
//    line = nullptr;
//
//    return 0;
//}

//int main() {
//    const int a = 5;
//    int b = 10;
//    const int* p = &a;
//    //*p = 7;
//    p = &b;
//    cout << "*p = " << *p << endl;
//
//    return 0;
//}