#include<iostream>

using namespace std;

#include<string>

class Person
{
public:
	int m_age;
	string m_name;
	
	Person(string name,int age)
	{
		this->m_name=name;
		this->m_age=age;
	}	
	
	//����==
	bool operator!=(Person& p)
	{
		if(this->m_age!=p.m_age||this->m_name!=p.m_name)
		return true;
		else return false;
	} 
	
};

void test01()
{
	Person p1("����",18);
	Person p2("lisi",18);
	
	if(p1!=p2)
	{
		cout<<"�����"<<endl;
	}
	
	else cout<<"p1��p2��ͬһ����"<<endl;
}

int main()
{
	
	test01();
	
	system("pause");
	
	return 0;
}
