#include <iostream>
#include <cstring>  
#include "student.h" //��Ҫ©д���У��������ͨ����
using namespace std;
Student::Student() : num(0), sex(' ') 
{
    name[0] = '\0';  // ��ʼ�� name Ϊһ�����ַ���
}
void Student::set_value(int n, const char* nm, char s)
{
    num = n;
    // ʹ�� strncpy ��ȷ�����ᳬ�� name �����С
    strncpy_s(name, nm, sizeof(name) - 1);
    name[sizeof(name) - 1] = '\0';  // ȷ�� name ������ֹ����'\0'
    sex = s;
}
void Student::display() const //�����ⶨ��display�ຯ��
{
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}
