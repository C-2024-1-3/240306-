#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double fahrenheit, celsius;    
    cout << "�����뻪���¶�:";
    cin >> fahrenheit;  
    celsius = (5.0 / 9.0) * (fahrenheit - 32);    
    cout << "��Ӧ�������¶���:" << fixed << setprecision(2) << celsius << "��C" << endl;

    return 0;
}