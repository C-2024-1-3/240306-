//#include <iostream>
//using namespace std;
//int gcd(int a, int b)
//{
//	while (b != 0)//����ŷ������㷨����շת�ദ���������������
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
//	cout << "�������һ����Ȼ��" << endl;
//	cin >> m ;
//	cout << "������ڶ�����Ȼ��" << endl;
//	cin >> n;
//	if (m <= 0 || n <= 0) //����m��n�Ƿ�Ϊ������
//	{
//		cout << "��������������" << endl;
//		return 1;
//	}
//	gcd_ = gcd(m, n);
//	/*lcm_ = (m * n) / gcd(m, n);*/
//	cout << "�������Ϊ" << gcd_ << endl;
//	/*cout << "��С������Ϊ" << lcm_ << endl;*/
//}
#include <iostream>
using namespace std;
void gcd_lcm(int a, int b, int& gcd, int& lcm);//��������
int main() {
    int m, n, gcd_result, lcm_result;
    cout << "�������һ����Ȼ��: ";
    cin >> m;
    cout << "������ڶ�����Ȼ��: ";
    cin >> n;
    if (m <= 0 || n <= 0) //����Ƿ�����������
    {
        cout << "��������������" << endl;
        return 1;
    }
    gcd_lcm(m, n, gcd_result, lcm_result);//����gcm_lcm�����������Լ������С������
    cout << "�������Ϊ: " << gcd_result << endl;
    cout << "��С������Ϊ: " << lcm_result << endl;
    return 0;
}
void gcd_lcm(int a, int b, int& gcd, int& lcm) 
{   int _a = a, _b = b;//����ԭʼa��b
    while (b != 0) //����ŷ������㷨����շת�ദ���������������
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    gcd = a; 
    lcm = (_a * _b) / gcd; //��ʱa��b�Ѿ��ı䣬���Ҫ��֮ǰ��a��b
}