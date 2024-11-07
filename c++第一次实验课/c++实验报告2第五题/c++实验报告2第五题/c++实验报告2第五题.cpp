#include <iostream>
#include <cctype> 
using namespace std;

int main() {
    char c;
    int zm = 0, kg = 0, sz = 0, qt = 0;
    cout << "请输入一行字符:(回车停止)";
    while (cin.get(c) && c != '\n') 
    {
        if (isalpha(c)) 
        {
            zm++; 
        }
        else if (isspace(c)) 
        {
            kg++; 
        }
        else if (isdigit(c)) 
        {
            sz++;  
        }
        else 
        {
            qt++; 
        }
    }
    cout << "英文字母的个数: " << zm << endl;
    cout << "空格的个数: " << kg << endl;
    cout << "数字字符的个数: " << sz << endl;
    cout << "其他字符的个数: " << qt << endl;

    return 0;
}
