#include<iostream>

using namespace std;

#include<string>

class phone
{
public:
	phone(string name)
	{
		m_name=name;
		cout<<"phone�Ĺ���"<<endl;
	}
	~phone()
	{
		cout<<"phone ����"<<endl;
	}
	string m_name;
};

class person
{
public:	
	person(string name,string pname):m_name(name),m_phone(pname)
	{//phone p_name=b;==p_name(b);
		cout<<"person����"<<endl;
	}
	~person()
	{
		cout<<"person ����"<<endl;
	}

	string m_name;
	
	phone m_phone;
	
	void playgame()
	{
		cout<<m_name<<"����"<<m_phone<<endl;
	}
};

void test()
{
	person p("����","ƻ��");
	
	p.playgame();
}

int main()
{
	test();
	
	system("pause");
	
	return 0;
}


