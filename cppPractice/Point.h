#include <iostream>
#include <string>
using namespace std;

class Point {
public:
    // ʹ�ô�����Ĭ�Ϲ��캯������ʹ�ó�ʼ���б��ʼ�� x��y
    Point(double x = 0, double y = 0);
    // �������캯��
    Point(const Point& p);
    // ��������������û�������ڴ棬���������в���Ҫ��ʲô
    ~Point();

    // x, y �󶨵ĳɳ�Ա����
    void setPoint(const Point& p);
    void setPoint(double x, double y);
    void setX(double x);
    void setY(double y);
    double getX();
    double getY();
private:
    double x;
    double y;
};