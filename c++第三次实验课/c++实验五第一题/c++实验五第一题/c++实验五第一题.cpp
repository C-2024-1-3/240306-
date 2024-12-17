#include<iostream>
using namespace std;
class Time //声明类
{
public: //成员函数为公有的
	void set_time() //类体内定义成员函数
	{
		cout << "请依次输入小时、分钟、秒" << endl;
		cin >> hour;
		cin >> minute;
		cin >> sec;
	}
	void get_time() //类体内定义成员函数
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
private: //数据成员为私有的
	int hour;
	int minute;
	int sec;
};
Time t; //定义类对象
int main()
{
	t.set_time(); //调用对象的成员函数
	t.get_time(); //调用对象的成员函数
	return 0;
}
