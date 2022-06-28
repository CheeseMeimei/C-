#include<iostream>

using namespace std;

#include<string>

class phone
{
public:
	phone(string name)
	{
		m_name=name;
		cout<<"phone的构造"<<endl;
	}
	~phone()
	{
		cout<<"phone 析构"<<endl;
	}
	string m_name;
};

class person
{
public:	
	person(string name,string pname):m_name(name),m_phone(pname)
	{//phone p_name=b;==p_name(b);
		cout<<"person构造"<<endl;
	}
	~person()
	{
		cout<<"person 析构"<<endl;
	}

	string m_name;
	
	phone m_phone;
	
	void playgame()
	{
		cout<<m_name<<"拿着"<<m_phone<<endl;
	}
};

void test()
{
	person p("张三","苹果");
	
	p.playgame();
}

int main()
{
	test();
	
	system("pause");
	
	return 0;
}


