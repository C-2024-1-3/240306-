#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b); 
}

int main() {
    int a, b;
    cout << "�������һ�������� a: ";
    cin >> a;
    cout << "������ڶ��������� b: ";
    cin >> b;
    if (a <= 0 || b <= 0) {
        cout << "��������������" << endl;
        return 1;  
    }
    int gcd_result = gcd(a, b);
    int lcm_result = lcm(a, b);
    cout << "���Լ��Ϊ: " << gcd_result << endl;
    cout << "��С������Ϊ: " << lcm_result << endl;
    return 0;
}
