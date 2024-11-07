#include <iostream>
using namespace std;

int main() 
{
    double num1, num2;
    char op;
    cout << "请输入第一个数字: ";
    cin >> num1;
    cout << "请输入运算符 (+, -, *, /, %): ";
    cin >> op;
    cout << "请输入第二个数字: " << endl;
    cin >> num2;
    if (op == '+') 
    {
        cout << "结果: " << num1 + num2 << endl;
    }
    else if (op == '-') 
    {
        cout << "结果: " << num1 - num2 << endl;
    }
    else if (op == '*') 
    {
        cout << "结果: " << num1 * num2 << endl;
    }
    else if (op == '/')
    {
        if (num2 == 0) 
        {
            cout << "除数不能为零" << endl;
        }
        else {
            cout << "结果: " << num1 / num2 << endl;
        }
    }
    else if (op == '%') 
    {
        if (num2 == 0) 
        {
            cout << "除数不能为零" << endl;
        }
        else 
        {
            int int_num1 = static_cast<int>(num1);
            int int_num2 = static_cast<int>(num2);
            cout << "结果: " << int_num1 % int_num2 << endl;
        }
    }
    else {
        cout << "输入非法符号" << endl;
    }

    return 0;
}
