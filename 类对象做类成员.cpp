#include<iostream>
using namespace std;
#include<string>
class Phone
{
public:
	Phone(string name)
	{
		cout<<"Phone�Ĺ��캯������"<<endl;
		m_Phonename=name;
	}
	~Phone()
	{
		cout<<"Phone��������������"<<endl;
	}
	
	string m_Phonename;
}; 


class Person
{
public:
	// m_Pname(Pname)�൱��Phone m_Pname(Pname) �ڴ�������ʱ��
	//ֱ����Phone���оͳ�ʼ���� 
	Person(string name,string Pname):m_name(name),m_Pname(Pname)
	{
		cout<<"Person�Ĺ��캯������"<<endl;
	}
	~Person()
	{
		cout<<"Person��������������"<<endl;
	}
	
	string m_name;
	Phone m_Pname;
};

void test01()
{
	Person p("��·��","����K40");
	cout<<p.m_name<<"����"<<p.m_Pname.m_Phonename<<endl;
}


int main()
{
	test01();
	return 0;
}
