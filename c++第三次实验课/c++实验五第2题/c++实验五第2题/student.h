#ifndef STUDENT_H
#define STUDENT_H

class Student
{
public:                   //���ó�Ա����ԭ������
    Student();  // Ĭ�Ϲ��캯��
    void set_value(int n, const char* nm, char s);  // �������ݳ�Ա�ĺ���
    void display() const;  // ��ʾѧ����Ϣ
private:
    int num;
    char name[20];
    char sex;
};

#endif
