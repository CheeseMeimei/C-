#include<iostream>

using namespace std;

class Base
{
public:
	static int m_a;
	void func()
	{
		cout<<"Base 的func函数调用"<<endl; 
	}
	void func(int a)
	{
		cout<<"Base 的func(a)函数调用"<<endl; 
	}
};
int Base::m_a=100;

class Son:public Base
{
public:
	static int m_a;
	void func()
	{
		cout<<"Son 的func函数调用"<<endl; 
	}
};
int Son::m_a=200;

void test01()//数据成员 
{
	Son s;
	cout<<s.m_a<<endl;
	cout<<s.Base::m_a<<endl;
	cout<<"通过类名访问静态数据成员"<<endl;
	cout<<Son::m_a<<endl;
	cout<<Son::Base::m_a<<endl;//第一个<<意思是 通过类名访问，第二个<<意思作用域 
}

void test02()//函数成员
{
	Son s1;
	s1.func();
	s1.Base::func();
	//s1.func(1);//会报错因为子类和父类同名后，编译器会将父类中同名函数隐藏包括重载 
 	s1.Base::func(1); 
 } 
int main()
{
	test01();
	test02();
	
	return 0;
}
