#include <iostream>
using namespace std;

int main() 
{
    double perprice = 0.8;  
    int apple = 2;       
    int Apples = 0;       
    double Cost = 0;    
    int days = 0;           

    while (apple <= 100) 
    {
        Apples += apple; 
        Cost += apple * perprice; 
        days++;  
        apple *= 2;  
    }
    double averageCost = Cost / days;
    cout << "�ܹ����ƻ����: " <<Apples << endl;
    cout << "�ܻ���: " << Cost << " Ԫ" << endl;
    cout << "�ܹ������� " << days << " ��" << endl;
    cout << "ÿ���ƽ������: " << averageCost << " Ԫ" << endl;

    return 0;
}
