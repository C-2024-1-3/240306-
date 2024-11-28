#include <iostream>
#include <iomanip>
using namespace std;
// 定义is_prime函数，判断num是否为素数
bool is_prime(int num) 
{
    if (num <= 1) return false; // 1和负数不是素数
    if (num == 2) return true; // 2是最小的素数
    if (num % 2 == 0) return false; // 排除所有偶数
    for (int i = 3; i * i <= num; i += 2) // 只需要检查到一个i小于等于num的平方根。因为如果num是合数则至少有一个因素小于等于其平方根
    { 
        if (num % i == 0) return false;
    }
    return true;
}
int main() 
{
    int count = 0; // 记录已找到的素数数量
    int number = 2; // 从2开始检查因为2是最小的素数
    while (count < 200) // 直到找到200个素数
    { 
        if (is_prime(number)) 
        {
            cout.width(5); // 设置输出宽度为5，确保对齐
            cout << number; 
            if (++count % 10 == 0) // 每输出10个素数换一行
                cout << endl;
            else
                cout << " "; // 输出空格分隔
        }
        ++number; 
    }

    return 0;
}