#include<iostream>

using namespace std;

int main() {
    const double PI = 3.14159; 
    double r, h, v;
    cout << "������Բ׶�׵İ뾶��";
    cin >> r;
    cout << "������Բ׶�ĸߣ�";
    cin >> h;    
    v = (1.0 / 3) * PI * r*r * h;    
    cout << "Բ׶������ǣ�" << v<< endl;
    return 0;
}