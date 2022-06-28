#include<iostream>

using namespace std;

class Base
{
	
public:
	int m_A;
	
	Base()
	{
		m_A=100; 
	}
	
	void func()
	{
		cout<<"这是Base中的func函数"<<endl; 
	}
};

class Son:public Base
{
	
public:
	int m_A;
	
	Son()
	{
		m_A=200;
	}
	
	void func()
	{
		cout<<"这是Son中的func函数"<<endl; 
	}
};

void test01()
{
	Son s;
	//如果是子类的同名成员，可直接调用 
	cout<<"Son中的m_A="<<s.m_A<<endl;
	//如果是父类同名成员，需要加作用域
	cout<<"Base中的m_A="<<s.Base::m_A<<endl;
	//同名函数也一样需要加作用域 
	s.func();
	
	s.Base::func();
}

int main()
{
	test01();
	
	system("pause");
	
	return 0;
}
