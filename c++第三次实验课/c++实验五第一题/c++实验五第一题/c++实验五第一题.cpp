#include<iostream>
using namespace std;
class Time //������
{
public: //��Ա����Ϊ���е�
	void set_time() //�����ڶ����Ա����
	{
		cout << "����������Сʱ�����ӡ���" << endl;
		cin >> hour;
		cin >> minute;
		cin >> sec;
	}
	void get_time() //�����ڶ����Ա����
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
private: //���ݳ�ԱΪ˽�е�
	int hour;
	int minute;
	int sec;
};
Time t; //���������
int main()
{
	t.set_time(); //���ö���ĳ�Ա����
	t.get_time(); //���ö���ĳ�Ա����
	return 0;
}
