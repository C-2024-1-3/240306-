#include <iostream> //将类声明头文件包含进来
#include "student.h"
using namespace std;
int main()
{
    Student stud;
    stud.set_value(007, "tcg", 'm');   // 使用 set_value 为学生对象赋值
    stud.display();
    return 0;
}
