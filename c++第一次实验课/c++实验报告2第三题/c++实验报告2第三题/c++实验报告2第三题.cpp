#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "�����������ε������� a, b, c: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        double perimeter = a + b + c;
        cout << "�ܳ�Ϊ: " << perimeter << endl;
        if (a == b || b == c || a == c) {
            cout << "���������ǵ��������Ρ�" << endl;
        }
        else {
            cout << "�������β��ǵ��������Ρ�" << endl;
        }
    }
    else {
        cout << "����ı��޷�����һ�������Ρ�" << endl;
    }

    return 0;
}
