#include <iostream>
using namespace std;

int* f() 
{
    int* list = new int[4] {1, 2, 3, 4};  // ʹ��new��̬�����ڴ�
    return list;
}

int main() 
{
    int* p = f();
    cout << p[0] << endl;
    cout << p[1] << endl;
    delete[] p;  // �ͷŶ�̬������ڴ�
    return 0;
}