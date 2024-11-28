#include <iostream>
#include <iomanip>
using namespace std;
// ����is_prime�������ж�num�Ƿ�Ϊ����
bool is_prime(int num) 
{
    if (num <= 1) return false; // 1�͸�����������
    if (num == 2) return true; // 2����С������
    if (num % 2 == 0) return false; // �ų�����ż��
    for (int i = 3; i * i <= num; i += 2) // ֻ��Ҫ��鵽һ��iС�ڵ���num��ƽ��������Ϊ���num�Ǻ�����������һ������С�ڵ�����ƽ����
    { 
        if (num % i == 0) return false;
    }
    return true;
}
int main() 
{
    int count = 0; // ��¼���ҵ�����������
    int number = 2; // ��2��ʼ�����Ϊ2����С������
    while (count < 200) // ֱ���ҵ�200������
    { 
        if (is_prime(number)) 
        {
            cout.width(5); // ����������Ϊ5��ȷ������
            cout << number; 
            if (++count % 10 == 0) // ÿ���10��������һ��
                cout << endl;
            else
                cout << " "; // ����ո�ָ�
        }
        ++number; 
    }

    return 0;
}