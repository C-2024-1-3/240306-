#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "������һ���ַ�:";
    cin >> c;
    if (c >= 'a' && c <= 'z') 
    {
        cout << "��Ӧ��д��ĸΪ:" << char(c - 'a' + 'A') << endl;
    }
    else 
    {
        cout << "����ַ���ASCII��ֵ:" << int(c) + 1 << endl;
    }

    return 0;
}