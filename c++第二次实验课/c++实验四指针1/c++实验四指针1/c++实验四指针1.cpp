#include <iostream>
using namespace std;

int* f() 
{
    int* list = new int[4] {1, 2, 3, 4};  // 使用new动态分配内存
    return list;
}

int main() 
{
    int* p = f();
    cout << p[0] << endl;
    cout << p[1] << endl;
    delete[] p;  // 释放动态分配的内存
    return 0;
}