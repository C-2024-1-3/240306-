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
        cout << "（" << x << ", " << y << ")" <<endl;
    }
};

int main() {
    Point p; 
    cout << "初始坐标: ";
    p.display();
    p.setPoint(5, 10);
    cout << "更新后坐标: ";
    p.display();
    return 0;
}