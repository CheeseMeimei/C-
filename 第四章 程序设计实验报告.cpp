#include<iostream>

using namespace std;

#include<string>

class information
{
public:
	information(string n,string g,string nu,string r)
	{
		name=n;gender=g;num=nu;room=r;
	}
	void print()
	{
		cout<<"基本信息："<<endl;
		cout<<this->name<<" "<<this->gender<<" "<<this->num<<" "<<this->room<<endl;
	}
private:
	string name,gender;
	string num;
	string room;
};

class Student
{
public:
	Student(string n,string g,string nu,string r,double m,double c,double e)
	{
		name=n;gender=g;num=nu;room=r;m_score=m;c_score=c;e_score=e;
	}
	void print()
	{
		cout<<"学生信息："<<endl;
		cout<<this->name<<" "<<this->gender<<" "<<this->num<<" "<<this->room<<endl;
		cout<<"数学成绩："<<this->m_score<<" 语文成绩："<<this->c_score<<" 英语成绩："<<this->e_score<<endl;
	}
private:
	string name,gender;
	string num;
	string room;
	double m_score,c_score,e_score;
};

class Teacher
{
public:
	Teacher(string n,string g,string nu,string r,string p,int a)
	{
		name=n;gender=g;num=nu;room=r;position=p;age=a;
	}
	void print()
	{
		cout<<"老师信息："<<endl;
		cout<<this->name<<" "<<this->gender<<" "<<this->num<<" "<<this->room<<endl;
		cout<<this->position<<" "<<this->age<<endl;
	}
private:
	string name,gender;
	string num;
	string room;
	string position;
	int age;
};

int main()
{
	information i("盖昕怡","男","110","微机2014班");
	i.print();
	Student s("王路明","女","120","不知道哪班",1,2,3);
	s.print();
	Teacher t("张雨佳","女","150450到了楼下喊我名","微机2107","美女",18); 
	t.print();
	return 0;
}
