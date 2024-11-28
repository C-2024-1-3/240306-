#include <iostream>
#include <cctype>  // 用于tolower函数
using namespace std;
int parseHex(const char* const hexString);
int main() 
{
    const int MAX_LENGTH = 100;  
    char hexString[MAX_LENGTH]{};
    cout << "请输入一个16进制字符串: ";
    cin.getline(hexString, MAX_LENGTH);
    int decimalValue = parseHex(hexString);
    cout << "16进制字符串 " << hexString << " 对应的10进制数是: " << decimalValue << endl;

    return 0;
}
int parseHex(const char* const hexString) 
{
    int result = 0;
    int length = 0;
    while (hexString[length] != '\0') 
    {
        length++;
    }
    for (int i = 0; i < length; ++i)// 从右向左遍历字符串
    {
        char c = tolower(hexString[length - 1 - i]);// 将字符转换为小写
        int value = 0;
        if (c >= '0' && c <= '9') 
        {
            value = c - '0';
        }
        else if (c >= 'a' && c <= 'f') 
        {
            value = c - 'a' + 10;
        }
        else 
        {
            cerr << "无效的16进制字符: " << c << endl;
            return -1; //表示无效
        }
        result += value * static_cast<int>(pow(16, i));
    }

    return result;
}