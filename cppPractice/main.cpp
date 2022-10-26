/// <summary>
/// ----------�ڴ����----------
/// ջ��      �洢�����Ĳ������ֲ�������
/// ����      �ɳ���Ա���䡢�ͷ��ڴ�
/// ȫ����    �洢ȫ�ֱ����;�̬����
/// ������    �洢����
/// ������    �洢�߼�����Ķ�����
/// </summary>
#include "Line.h"

// ջ��ʵ����
void stackInstantiation() {
    // ʵ������������
    Point point[3];

    // �����������
    cout << "p[0]: (" << point[0].getX() << ", " << point[0].getY() << ")" << endl;
    cout << "p[1]: (" << point[1].getX() << ", " << point[1].getY() << ")" << endl;
    cout << "p[2]: (" << point[2].getX() << ", " << point[2].getY() << ")" << endl;
    point[0].setPoint(3, 4);
    cout << "p[0]: (" << point[0].getX() << ", " << point[0].getY() << ")" << endl;
}

// ����ʵ����
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

    // �ͷ��ڴ�
    delete[] point;
    point = nullptr;
}

//int main() {
//    // stackInstantiation();
//    // heapInstantiatation();
//
//    // ʵ����
//    Line* line = new Line(1, 2, 3, 5);
//    // Line* line = new Line(Point(1, 2), Point(3, 5));
//
//    cout << "sizeof (p) = " << sizeof(line) << endl;
//    cout << "sizeof (Line) = " << sizeof(Line) << endl;
//
//    // �ͷ��ڴ�
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