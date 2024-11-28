#include <iostream>
#include <cctype>  // ����tolower����
using namespace std;
int parseHex(const char* const hexString);
int main() 
{
    const int MAX_LENGTH = 100;  
    char hexString[MAX_LENGTH]{};
    cout << "������һ��16�����ַ���: ";
    cin.getline(hexString, MAX_LENGTH);
    int decimalValue = parseHex(hexString);
    cout << "16�����ַ��� " << hexString << " ��Ӧ��10��������: " << decimalValue << endl;

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
    for (int i = 0; i < length; ++i)// ������������ַ���
    {
        char c = tolower(hexString[length - 1 - i]);// ���ַ�ת��ΪСд
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
            cerr << "��Ч��16�����ַ�: " << c << endl;
            return -1; //��ʾ��Ч
        }
        result += value * static_cast<int>(pow(16, i));
    }

    return result;
}