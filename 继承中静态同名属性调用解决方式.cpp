#include<iostream>

using namespace std;

class Base
{
public:
	static int m_A;
	
	static void func()
	{
		cout<<"���Ǻ���"<<endl;
	}
};

int Base::m_A=100;

class Son:public Base
{
public:
	static int m_A;
	
	static void func()
	{
		cout<<"����2����"<<endl;
	}
};
int Son::m_A=200;

void test01()
{
	//1.ͨ���������
	Son s;
	
	cout<<s.m_A<<endl;
	
	cout<<s.Base::m_A<<endl;
	
	s.func();
	
	s.Base::func();
	
	//2.ͨ���������� 
	cout<<Son::m_A<<endl;
	
	cout<<Son::Base::m_A<<endl;
	
	Son::func();
	
	Son::Base::func();
}


int main()
{
	test01();
	
	system("pause");
	
	return 0;
}
