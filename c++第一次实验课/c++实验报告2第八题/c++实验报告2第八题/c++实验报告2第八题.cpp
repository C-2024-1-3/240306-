#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double a, x, x_next;
    cout << "������һ���� a";
    cin >> a;
    if (a < 0)
    {
        cout << "���븺����ƽ����" << endl;
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
    cout << "ƽ�����Ľ���ֵΪ: " << x_next << endl;

    return 0;
}
