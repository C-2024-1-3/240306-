#include<iostream>
using namespace std;

class Box
{
public:
	void get_value();
	float volume();
	void display();
private:
	float length;
	float width;
	float height;
};

void Box::get_value()
{
	cout << "请输入长宽高:";
	cin >> length >> width >> height;
}

float Box::volume()
{
	return (length * width * height);
}

void Box::display()
{
	cout << volume() << endl;
}

int main()
{
	Box box1, box2, box3;

	box1.get_value();
	cout << "长方体1体积为";
	box1.display();

	box2.get_value();
	cout << "长方体2体为";
	box2.display();

	box3.get_value();
	cout << "长方体3体积为";
	box3.display();

	return 0;
}
