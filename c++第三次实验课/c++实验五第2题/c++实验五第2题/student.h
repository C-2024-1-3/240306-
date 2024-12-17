#ifndef STUDENT_H
#define STUDENT_H

class Student
{
public:                   //公用成员函数原型声明
    Student();  // 默认构造函数
    void set_value(int n, const char* nm, char s);  // 设置数据成员的函数
    void display() const;  // 显示学生信息
private:
    int num;
    char name[20];
    char sex;
};

#endif
