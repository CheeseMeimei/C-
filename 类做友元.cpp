#include<iostream>
using namespace std;
#include<string>
class Person
{
	
public:
friend class goodsister;
	Person()
	{
		name="�����";
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
		cout<<"�û��ѷ���������֣�"<<p.name<<endl;
		cout<<"�û��ѷ���������䣺"<<p.age<<endl;
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
