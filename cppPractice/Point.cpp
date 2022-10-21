#include "Point.h"
using namespace std;

Point::Point(double x, double y) : x(x), y(y) {
    cout << "Point(double x = " << x << ", double y = " << y << ")" << endl;
}

// �������캯��
Point::Point(const Point& p) {
    // ��ӡ���ֵ
    cout << "Point(const Point &p:(" << p.x << ", " << p.y << ")" << endl;
    this->x = p.x;
    this->y = p.y;
}

// ��������������û�������ڴ棬���������в���Ҫ��ʲô
Point::~Point() {
    cout << "~Point():(" << x << ", " << y << ")" << endl;
}

// x, y �󶨵ĳɳ�Ա����
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