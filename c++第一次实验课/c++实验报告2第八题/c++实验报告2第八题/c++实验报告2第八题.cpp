#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double a, x, x_next;
    cout << "请输入一个数 a";
    cin >> a;
    if (a < 0)
    {
        cout << "输入负数无平方根" << endl;
        return 1; 
    }
    x = a;
    do {
        x_next = 0.5 * (x + a / x); 
        if (fabs(x_next - x) < 1e-5) 
        { 
            break;
        }
        x = x_next;  
    } while (true);
    cout << "平方根的近似值为: " << x_next << endl;

    return 0;
}
