#include <iostream>
using namespace std;
int main() 
{
    const int nLOCKERS = 100;
    bool lockers[nLOCKERS] = { false }; 
    for (int student = 1; student <= nLOCKERS; ++student) 
    {
        for (int locker = student - 1; locker < nLOCKERS; locker += student) 
        {
            lockers[locker] = !lockers[locker]; 
        }
    }
    cout << "开着的存物柜编号为：" << endl;
    for (int i = 0; i < nLOCKERS; ++i) 
    {
        if (lockers[i]) 
        {
            cout << (i + 1) << " "; 
        }
    }
    cout << endl;
    return 0;
}