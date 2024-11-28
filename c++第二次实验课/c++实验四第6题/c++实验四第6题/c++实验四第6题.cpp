#include <iostream>
#include <cctype>  
#include <cstring>  
using namespace std;
void count(const char s[], int counts[]);

int main() {
    const int NUM_LETTERS = 26;  // ��ĸ���е���ĸ����
    int letterCounts[NUM_LETTERS] = { 0 };  
    char input[1000];  
    cout << "������һ���ַ���: ";
    cin.getline(input, sizeof(input));  // ʹ��getline��ȡһ�У������ո�
    count(input, letterCounts);
    for (int i = 0; i < NUM_LETTERS; ++i) 
    {
        if (letterCounts[i] > 0) 
        {
            cout << static_cast<char>('a' + i) << ": " << letterCounts[i] << endl;
        }
    }

    return 0;
}
void count(const char s[], int counts[]) 
{
    for (int i = 0; i < strlen(s); ++i) 
    { 
        if (isalpha(s[i])) 
        { 
            int index = tolower(s[i]) - 'a';  // ���ַ�ת����Сд����������
            counts[index]++;
        }
    }
}