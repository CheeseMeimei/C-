#include<iostream>

using namespace std;

class Base1
{
public:
	int m_a;
	Base1()
	{
		m_a=10;
	}
};

class Base2
{
public:
	int m_a;
	Base2()
	{
		m_a=20;
	}
};

class Son:public Base1,public Base2
{
public:
	int m_c;
	int m_d;
	Son()
	{
		m_c=30;
		m_d=40;
	}
};

void test01()
{
	Son s;
	cout<<"sizeof(Son)="<<sizeof(s)<<endl; 
	cout<<s.Base1::m_a;
	cout<<s.Base2::m_a;
}

int main()
{
	test01();
	return 0;
}
