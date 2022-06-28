#include<iostream>

using namespace std;

class base
{
	
	
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
public:
	base()
	{
		m_a=10;
		m_b=10;
		m_c=10;
	}
};

class son:public base
{
	friend void test01();
public:	
	son()
	{
		m_a=100;
		m_b=100;
	}
};

void test01()
{
	son s1;
	
	cout<<s1.m_a<<endl;
	
	cout<<s1.m_b<<endl;
	
}

int main()
{
	test01();
	
	system("pause");
	
	return 0;
}
