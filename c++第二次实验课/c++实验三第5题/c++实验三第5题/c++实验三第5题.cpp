#include <iostream>
using namespace std;
int peaches(int day);//��������
int main() 
{
    int day = 1; 
    int p = peaches(day); 
    cout << "��һ����ӹ�ժ�� " << p << " ������." << endl;
    return 0;
}
int peaches(int day) //����ݹ麯��
{
    if (day == 10) 
    {
        return 1; 
    }
    else 
    {
        return (peaches(day + 1) + 1) * 2;
        //������ϵΪp2=p1/2-1,��p1=(p2+1)*2,��ΪҪ���Ƶ�һ�졣
    }
}