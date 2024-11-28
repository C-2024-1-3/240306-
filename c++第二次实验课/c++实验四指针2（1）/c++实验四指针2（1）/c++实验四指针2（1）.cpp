#include <iostream>
#include <cstring>  // 用于strlen
using namespace std;
int indexOf(const char s1[], const char s2[]) // 检验s1是否是s2的子串
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for (int i = 0; i <= len2 - len1; ++i)// 遍历s2中的每个可能的起始位置
    {
        bool match = true;
        for (int j = 0; j < len1; ++j)// 比较s1和s2的子串 
        {
            if (s1[j] != s2[i + j])
            {
                match = false;
                break;
            }
        }
        if (match)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    const int MAX_LENGTH = 100;
    char s1[MAX_LENGTH], s2[MAX_LENGTH];
    cout << "请输入第一个字符串s1: ";
    cin.getline(s1, MAX_LENGTH);
    cout << "请输入第二个字符串s2: ";
    cin.getline(s2, MAX_LENGTH);
    int index = indexOf(s1, s2);
    if (index != -1)
    {
        cout << index << endl;
    }
    else
    {
        cout << index << endl;
    }

    return 0;
}