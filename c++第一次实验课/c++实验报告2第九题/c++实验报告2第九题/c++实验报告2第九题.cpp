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
    cout << "总购买的苹果数: " <<Apples << endl;
    cout << "总花费: " << Cost << " 元" << endl;
    cout << "总共购买了 " << days << " 天" << endl;
    cout << "每天的平均花费: " << averageCost << " 元" << endl;

    return 0;
}
