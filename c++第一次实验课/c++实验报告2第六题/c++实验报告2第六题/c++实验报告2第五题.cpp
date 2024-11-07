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
    cout << "请输入第一个正整数 a: ";
    cin >> a;
    cout << "请输入第二个正整数 b: ";
    cin >> b;
    if (a <= 0 || b <= 0) {
        cout << "请输入正整数！" << endl;
        return 1;  
    }
    int gcd_result = gcd(a, b);
    int lcm_result = lcm(a, b);
    cout << "最大公约数为: " << gcd_result << endl;
    cout << "最小公倍数为: " << lcm_result << endl;
    return 0;
}
