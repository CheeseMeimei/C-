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
	cout<<"������"<<name<<" "<<"���䣺"<<age<<" "<<"�Ա�"<<gender<<" "
	<<"ְ�ƣ�"<<title<<" "<<"��ַ��"<<address<<" "<<"�绰��"<<number<<" "<<endl;
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
		cout<<"ְ��"<<post<<"\t"<<"���ʣ�"<<wages<<endl;
	}
};

Teacher_Cadre::Teacher_Cadre(string n,string g,string a,string nu,int ag,string t,string p,string w):Teacher(n,g,a,nu,ag,t),Cadre(n,g,a,nu,ag,p)
{
	wages=w;
}

void test01()
{
	Teacher_Cadre tc("�����","Ů","�㷻��","150450����¥�º�����",18,"��ҵ��Ӣ","���г�ǿ���Ե�Ů��","һ����");
	
	tc.show();
}

int main()
{
	test01();
	return 0;
}
