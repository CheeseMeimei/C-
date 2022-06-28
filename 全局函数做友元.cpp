#include<iostream>

using namespace std;

class Person
{
	friend void date(Person *p);//友元声明 
public:
	Person()
	{
		name="张雨佳";
		age=18;
	}
	
	string name;
private:
	int age;
};
void date(Person *p)//此处用引用和指针都可以 
{
	cout<<"王路明将会访问你的名字："<<p->name<<endl;
	cout<<"王路明还要访问你的年龄："<<p->age<<endl;//错误 不可以访问私有属性
	//加了友元以后才正确 
}
void test01()
{
	Person p;
	date(&p);
}

int main()
{
	test01(); 
	return 0;
}
