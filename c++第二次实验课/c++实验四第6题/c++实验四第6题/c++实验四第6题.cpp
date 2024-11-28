#include <iostream>
#include <cctype>  
#include <cstring>  
using namespace std;
void count(const char s[], int counts[]);

int main() {
    const int NUM_LETTERS = 26;  // 字母表中的字母数量
    int letterCounts[NUM_LETTERS] = { 0 };  
    char input[1000];  
    cout << "请输入一个字符串: ";
    cin.getline(input, sizeof(input));  // 使用getline读取一行，包括空格
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
            int index = tolower(s[i]) - 'a';  // 将字符转换成小写并计算索引
            counts[index]++;
        }
    }
}