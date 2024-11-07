#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "请输入一个字符:";
    cin >> c;
    if (c >= 'a' && c <= 'z') 
    {
        cout << "对应大写字母为:" << char(c - 'a' + 'A') << endl;
    }
    else 
    {
        cout << "后继字符的ASCII码值:" << int(c) + 1 << endl;
    }

    return 0;
}