#include <iostream>
using namespace std;

int main() 
{
    double num1, num2;
    char op;
    cout << "�������һ������: ";
    cin >> num1;
    cout << "����������� (+, -, *, /, %): ";
    cin >> op;
    cout << "������ڶ�������: " << endl;
    cin >> num2;
    if (op == '+') 
    {
        cout << "���: " << num1 + num2 << endl;
    }
    else if (op == '-') 
    {
        cout << "���: " << num1 - num2 << endl;
    }
    else if (op == '*') 
    {
        cout << "���: " << num1 * num2 << endl;
    }
    else if (op == '/')
    {
        if (num2 == 0) 
        {
            cout << "��������Ϊ��" << endl;
        }
        else {
            cout << "���: " << num1 / num2 << endl;
        }
    }
    else if (op == '%') 
    {
        if (num2 == 0) 
        {
            cout << "��������Ϊ��" << endl;
        }
        else 
        {
            int int_num1 = static_cast<int>(num1);
            int int_num2 = static_cast<int>(num2);
            cout << "���: " << int_num1 % int_num2 << endl;
        }
    }
    else {
        cout << "����Ƿ�����" << endl;
    }

    return 0;
}
