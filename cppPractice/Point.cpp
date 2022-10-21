#include "Point.h"
using namespace std;

Point::Point(double x, double y) : x(x), y(y) {
    cout << "Point(double x = " << x << ", double y = " << y << ")" << endl;
}

// 拷贝构造函数
Point::Point(const Point& p) {
    // 打印点的值
    cout << "Point(const Point &p:(" << p.x << ", " << p.y << ")" << endl;
    this->x = p.x;
    this->y = p.y;
}

// 析构函数，由于没有申请内存，析构函数中不需要做什么
Point::~Point() {
    cout << "~Point():(" << x << ", " << y << ")" << endl;
}

// x, y 绑定的成成员函数
void Point::setPoint(const Point& p) {
    this->x = p.x;
    this->y = p.y;
}
void Point::setPoint(double x, double y) {
    this->x = x;
    this->y = y;
}
void Point::setX(double x) { this->x = x; }
void Point::setY(double y) { this->y = y; }
double Point::getX() { return x; }
double Point::getY() { return y; }