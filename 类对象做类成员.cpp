#include<iostream>
using namespace std;
#include<string>
class Phone
{
public:
	Phone(string name)
	{
		cout<<"Phone的构造函数调用"<<endl;
		m_Phonename=name;
	}
	~Phone()
	{
		cout<<"Phone的析构函数调用"<<endl;
	}
	
	string m_Phonename;
}; 


class Person
{
public:
	// m_Pname(Pname)相当于Phone m_Pname(Pname) 在传参数的时候
	//直接在Phone类中就初始化了 
	Person(string name,string Pname):m_name(name),m_Pname(Pname)
	{
		cout<<"Person的构造函数调用"<<endl;
	}
	~Person()
	{
		cout<<"Person的析构函数调用"<<endl;
	}
	
	string m_name;
	Phone m_Pname;
};

void test01()
{
	Person p("王路明","红米K40");
	cout<<p.m_name<<"拿着"<<p.m_Pname.m_Phonename<<endl;
}


int main()
{
	test01();
	return 0;
}
