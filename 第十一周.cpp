/*
定义一个基类有姓名、性别、年龄，再由基类派生出教师类和学生类。
教师类增加工号、职称和工资，学生类增加学号、班级、专业和入学成绩。
编程要求：
1、设计虚函数输出教师和学生的基本信息；
2、计算教师的平均工资并输出；
3、使用友元函数重载运算符“<”，找出入学成绩最高的学生并输出；*/

#include<iostream>
#include<string>
using namespace std;

class Person
{
protected:
	string name,gender;
	int age;
public:
	Person(string n,string g,int a)
	{
		name=n;gender=g;age=a;
	}
	virtual void print()
	{
		cout<<"姓名："<<name<<" 性别："<<gender<<" 年龄："<<age;
	}
};

class Teacher:public Person
{
private:
	string ID,title,salery;
public:
	Teacher(string n,string g,age a,string i,string t,string s):Person(n,g,a)
	{
		ID=i;title=t;salery=s;
	}
	void print()
	{
		Person::print();
		cout<<" 工号："<<ID<<" 职称："<<title<<" 工资："<<salery; 
	}
};

class Student:public Person
{
private:
};

int main()
{
	
	return 0;
}
