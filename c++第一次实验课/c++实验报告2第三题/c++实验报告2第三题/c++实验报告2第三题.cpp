#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "请输入三角形的三条边 a, b, c: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        double perimeter = a + b + c;
        cout << "周长为: " << perimeter << endl;
        if (a == b || b == c || a == c) {
            cout << "该三角形是等腰三角形。" << endl;
        }
        else {
            cout << "该三角形不是等腰三角形。" << endl;
        }
    }
    else {
        cout << "输入的边无法构成一个三角形。" << endl;
    }

    return 0;
}
