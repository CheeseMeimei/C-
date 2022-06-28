#include<iostream>
using namespace std;
#include<string>
class Person
{
	
public:
friend class goodsister;
	Person()
	{
		name="张雨佳";
		age=18;
	}
	
	string name;
private:
	int age;
};

class goodsister
{public:
	
	Person p;
	void ask()
	{
		cout<<"好基友访问你的名字："<<p.name<<endl;
		cout<<"好基友访问你的年龄："<<p.age<<endl;
	}
};
void test01()
{
	goodsister g;
	g.ask();
}
int main()
{
	test01();
	return 0;
}
