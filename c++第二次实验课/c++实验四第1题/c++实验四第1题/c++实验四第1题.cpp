#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    vector<int> uNumbers; 
    int num;
    cout << "请输入10个整数：" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> num;        
        if (find(uNumbers.begin(), uNumbers.end(), num) == uNumbers.end()) 
        {
            uNumbers.push_back(num);
        }
    }  
    cout << "新数组为：" << endl;
    for (int n : uNumbers) {
        cout << n <<" ";
    }

    return 0;
}