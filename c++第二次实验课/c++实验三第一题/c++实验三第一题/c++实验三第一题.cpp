//#include <iostream>
//using namespace std;
//int gcd(int a, int b)
//{
//	while (b != 0)//利用欧几里得算法（即辗转相处法）可算最大公因数
//	{
//		int temp = a % b;
//		a = b;
//		b = temp;
//	}
//	return a;
//}
//int main()
//{
//	int m, n, gcd_, lcm_;
//	cout << "请输入第一个自然数" << endl;
//	cin >> m ;
//	cout << "请输入第二个自然数" << endl;
//	cin >> n;
//	if (m <= 0 || n <= 0) //检验m、n是否为正整数
//	{
//		cout << "请输入正整数！" << endl;
//		return 1;
//	}
//	gcd_ = gcd(m, n);
//	/*lcm_ = (m * n) / gcd(m, n);*/
//	cout << "最大公因数为" << gcd_ << endl;
//	/*cout << "最小公倍数为" << lcm_ << endl;*/
//}
#include <iostream>
using namespace std;
void gcd_lcm(int a, int b, int& gcd, int& lcm);//函数声明
int main() {
    int m, n, gcd_result, lcm_result;
    cout << "请输入第一个自然数: ";
    cin >> m;
    cout << "请输入第二个自然数: ";
    cin >> n;
    if (m <= 0 || n <= 0) //检查是否输入正整数
    {
        cout << "请输入正整数！" << endl;
        return 1;
    }
    gcd_lcm(m, n, gcd_result, lcm_result);//调用gcm_lcm函数计算最大公约数和最小公倍数
    cout << "最大公因数为: " << gcd_result << endl;
    cout << "最小公倍数为: " << lcm_result << endl;
    return 0;
}
void gcd_lcm(int a, int b, int& gcd, int& lcm) 
{   int _a = a, _b = b;//保留原始a、b
    while (b != 0) //利用欧几里得算法（即辗转相处法）可算最大公因数
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    gcd = a; 
    lcm = (_a * _b) / gcd; //此时a、b已经改变，因此要用之前的a、b
}