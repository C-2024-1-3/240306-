#include <iostream>
using namespace std;
class Student
{
public:
	Student(string n, double s) : num(n), score(s) {}
	string num;
	double score;
};
int main()
{
	void max(Student*);
	Student s[5] =
	{
		Student("1",93),
		Student("2",100),
		Student("3",67),
		Student("4",82),
		Student("5",95)
	};
	max(s);
	return 0;
}
void max(Student* p)
{
	Student* t;
	Student* c;
	double max;
	for (t = p, c = t, max = t->score; t < (p + 5); ++t)
	{
		if (t->score > max)
		{
			max = t->score;
			c = t;
		}
	}
	cout << "成绩最高者为： " << c->num << endl;
}
