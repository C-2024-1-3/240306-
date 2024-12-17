#include <iostream>
#include <cstring>  
#include "student.h" //不要漏写此行，否则编译通不过
using namespace std;
Student::Student() : num(0), sex(' ') 
{
    name[0] = '\0';  // 初始化 name 为一个空字符串
}
void Student::set_value(int n, const char* nm, char s)
{
    num = n;
    // 使用 strncpy 以确保不会超出 name 数组大小
    strncpy_s(name, nm, sizeof(name) - 1);
    name[sizeof(name) - 1] = '\0';  // 确保 name 数组终止符是'\0'
    sex = s;
}
void Student::display() const //在类外定义display类函数
{
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}
