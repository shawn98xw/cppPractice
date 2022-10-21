#include <iostream>
using namespace std;

class Point {
public:
    // 使用带参数默认构造函数，并使用初始化列表初始化 x，y
    Point(double x = 0, double y = 0) : x(x), y(y) {
        //cout << "Point(double x = 0, double y = 0)" << endl;
        cout << "Point(double x = " << x << ", double y = " << y << ")" << endl;
    }

    // 拷贝构造函数
    Point(const Point& p) {
        //cout << "Point(const Point &p)" << endl;
        // 打印点的值
        cout << "Point(const Point &p:(" << p.x << ", " << p.y << ")" << endl;
        this->x = p.x;
        this->y = p.y;
    }

    // 析构函数，由于没有申请内存，析构函数中不需要做什么
    ~Point() {
        //cout << "~Point()" << endl;
        cout << "~Point():(" << x << ", " << y << ")" << endl;
    }

    // x, y 绑定的成成员函数
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
    // 栈上实例化
    Point point[3];

    // 对象数组操作
    cout << "p[0]: (" << point[0].getX() << ", " << point[0].getY() << ")" << endl;
    cout << "p[1]: (" << point[1].getX() << ", " << point[1].getY() << ")" << endl;
    cout << "p[2]: (" << point[2].getX() << ", " << point[2].getY() << ")" << endl;
    point[0].setPoint(3, 4);
    cout << "p[0]: (" << point[0].getX() << ", " << point[0].getY() << ")" << endl;
}

int main() {
    stackInstantiation();
}