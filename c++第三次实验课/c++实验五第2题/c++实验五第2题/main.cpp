#include <iostream> //��������ͷ�ļ���������
#include "student.h"
using namespace std;
int main()
{
    Student stud;
    stud.set_value(007, "tcg", 'm');   // ʹ�� set_value Ϊѧ������ֵ
    stud.display();
    return 0;
}
