#include <iostream>
using namespace std;
class Point {
private:
    int x, y; 

public:
    Point() : x(60), y(80) {}
    void setPoint(int i, int j) 
    {
        x = 60 + i; 
        y = 80 + j; 
    }
    void display() 
    {
        cout << "��" << x << ", " << y << ")" <<endl;
    }
};

int main() {
    Point p; 
    cout << "��ʼ����: ";
    p.display();
    p.setPoint(5, 10);
    cout << "���º�����: ";
    p.display();
    return 0;
}