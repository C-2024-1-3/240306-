#include <iostream>
#include <cctype> 
using namespace std;

int main() {
    char c;
    int zm = 0, kg = 0, sz = 0, qt = 0;
    cout << "������һ���ַ�:(�س�ֹͣ)";
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
    cout << "Ӣ����ĸ�ĸ���: " << zm << endl;
    cout << "�ո�ĸ���: " << kg << endl;
    cout << "�����ַ��ĸ���: " << sz << endl;
    cout << "�����ַ��ĸ���: " << qt << endl;

    return 0;
}
