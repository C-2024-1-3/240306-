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
	cout << "�����볤���:";
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
	cout << "������1���Ϊ";
	box1.display();

	box2.get_value();
	cout << "������2��Ϊ";
	box2.display();

	box3.get_value();
	cout << "������3���Ϊ";
	box3.display();

	return 0;
}
