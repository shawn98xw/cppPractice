#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int main()
{
    const int count = 10000000;
    vector<int> vec(count);

    auto start = clock();

    // 1. �±귽ʽ����
    for (int i = 0; i < count; i++) {
        // vec[i];
        // ���ֻ�Ǳ��������޸�ֵʱ����ʹ�� at(i) ������ʽ����
        vec.at(i);
    }
    cout << endl;
    auto end = clock();
    auto duration = end - start;
    cout << "�±귽ʽ���ʣ�" << duration << " ms" << endl;

    start = clock();
    // 2. ��������ʽ����
    for (auto d = vec.begin(); d != vec.end(); d++) {
        *d;
    }
    cout << endl;
    cout << "���������ʷ�ʽ��" << clock() - start << " ms" << endl;

    start = clock();
    // 3. ��������ʽ����
    for (vector<int>::const_iterator d = vec.begin(); d != vec.end(); d++) {
        *d;
    }
    cout << endl;
    cout << "���������ʷ�ʽ��" << clock() - start << " ms" << endl;

    start = clock();
    // 4. ��������ʽ����
    for (auto const d : vec) {
        d;
    }
    cout << endl;
    cout << "���������ʷ�ʽ��" << clock() - start << " ms" << endl;

    return 0;
}