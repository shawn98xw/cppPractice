#include <iostream>
using namespace std;

class Point {
public:
    // ʹ�ô�����Ĭ�Ϲ��캯������ʹ�ó�ʼ���б��ʼ�� x��y
    Point(double x = 0, double y = 0) : x(x), y(y) {
        //cout << "Point(double x = 0, double y = 0)" << endl;
        cout << "Point(double x = " << x << ", double y = " << y << ")" << endl;
    }

    // �������캯��
    Point(const Point& p) {
        //cout << "Point(const Point &p)" << endl;
        // ��ӡ���ֵ
        cout << "Point(const Point &p:(" << p.x << ", " << p.y << ")" << endl;
        this->x = p.x;
        this->y = p.y;
    }

    // ��������������û�������ڴ棬���������в���Ҫ��ʲô
    ~Point() {
        //cout << "~Point()" << endl;
        cout << "~Point():(" << x << ", " << y << ")" << endl;
    }

    // x, y �󶨵ĳɳ�Ա����
    void setPoint(const Point& p) {
        this->x = p.x;
        this->y = p.y;
    }
    void setPoint(double x, double y) {
        this->x = x;
        this->y = y;
    }
    void setX(double x) { this->x = x; }
    void setY(double y) { this->y = y; }
    double getX() { return x; }
    double getY() { return y; }
private:
    double x;
    double y;
};

void stackInstantiation() {
    // ջ��ʵ����
    Point point[3];

    // �����������
    cout << "p[0]: (" << point[0].getX() << ", " << point[0].getY() << ")" << endl;
    cout << "p[1]: (" << point[1].getX() << ", " << point[1].getY() << ")" << endl;
    cout << "p[2]: (" << point[2].getX() << ", " << point[2].getY() << ")" << endl;
    point[0].setPoint(3, 4);
    cout << "p[0]: (" << point[0].getX() << ", " << point[0].getY() << ")" << endl;
}

int main() {
    stackInstantiation();
}