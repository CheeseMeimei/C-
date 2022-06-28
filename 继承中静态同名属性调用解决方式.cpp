#include<iostream>

using namespace std;

class Base
{
public:
	static int m_A;
	
	static void func()
	{
		cout<<"这是函数"<<endl;
	}
};

int Base::m_A=100;

class Son:public Base
{
public:
	static int m_A;
	
	static void func()
	{
		cout<<"这是2函数"<<endl;
	}
};
int Son::m_A=200;

void test01()
{
	//1.通过对象访问
	Son s;
	
	cout<<s.m_A<<endl;
	
	cout<<s.Base::m_A<<endl;
	
	s.func();
	
	s.Base::func();
	
	//2.通过类名访问 
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
