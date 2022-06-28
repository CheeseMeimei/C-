#include<iostream>

using namespace std;

#include<string>

class Person
{
protected:
	string name,gender,address,number;int age;
	
public:
	Person(string n,string g,string a,string nu,int ag)
	{
		name=n;gender=g;address=a;number=nu;age=ag;
	}
	
};

class Teacher:public Person
{
protected:
	string title;
	
public:
	Teacher(string n,string g,string a,string nu,int ag,string t);
	
	void display();
};

Teacher::Teacher(string n,string g,string a,string nu,int ag,string t):Person(n,g,a,nu,ag)
{
	title=t;
}

void Teacher::display()
{
	cout<<"姓名："<<name<<" "<<"年龄："<<age<<" "<<"性别："<<gender<<" "
	<<"职称："<<title<<" "<<"地址："<<address<<" "<<"电话："<<number<<" "<<endl;
}

class Cadre:public Person
{
protected:
	string post;
	
public:
	Cadre(string n,string g,string a,string nu,int ag,string p);
};

Cadre::Cadre(string n,string g,string a,string nu,int ag,string p):Person(n,g,a,nu,ag)
{
	post=p;
}

class Teacher_Cadre:public Teacher,public Cadre
{
private:
	string wages;
	
public:
	Teacher_Cadre(string n,string g,string a,string nu,int ag,string t,string p,string w);
	
	void show()
	{
		Teacher::display();
		cout<<"职务："<<post<<"\t"<<"工资："<<wages<<endl;
	}
};

Teacher_Cadre::Teacher_Cadre(string n,string g,string a,string nu,int ag,string t,string p,string w):Teacher(n,g,a,nu,ag,t),Cadre(n,g,a,nu,ag,p)
{
	wages=w;
}

void test01()
{
	Teacher_Cadre tc("张雨佳","女","香坊区","150450到了楼下喊我名",18,"商业精英","具有超强大脑的女人","一百万");
	
	tc.show();
}

int main()
{
	test01();
	return 0;
}
