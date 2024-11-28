#include <iostream>
#include <cstring>  // ����strlen
using namespace std;
int indexOf(const char s1[], const char s2[]) // ����s1�Ƿ���s2���Ӵ�
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for (int i = 0; i <= len2 - len1; ++i)// ����s2�е�ÿ�����ܵ���ʼλ��
    {
        bool match = true;
        for (int j = 0; j < len1; ++j)// �Ƚ�s1��s2���Ӵ� 
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
    cout << "�������һ���ַ���s1: ";
    cin.getline(s1, MAX_LENGTH);
    cout << "������ڶ����ַ���s2: ";
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