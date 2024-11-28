#include <iostream>
using namespace std;
int peaches(int day);//函数声明
int main() 
{
    int day = 1; 
    int p = peaches(day); 
    cout << "第一天猴子共摘了 " << p << " 个桃子." << endl;
    return 0;
}
int peaches(int day) //定义递归函数
{
    if (day == 10) 
    {
        return 1; 
    }
    else 
    {
        return (peaches(day + 1) + 1) * 2;
        //函数关系为p2=p1/2-1,即p1=(p2+1)*2,因为要倒推第一天。
    }
}