#include<iostream>

using namespace std;

#include<string>

class Person
{
public:
	static int m_a;
	int m_c;
	int getm_b()
	{
		return m_b;
	}
	static void func()
	{
		cout<<"这是静态成员函数"<<endl;
		//用静态成员函数访问静态成员变量
		m_a=300;
		m_b=645;
		//m_c=10;//这不行 不能访问非静态成员变量 
	}
private:
	static int m_b;//静态变量也有访问权限 
};

int Person:: m_a=100;
int Person:: m_b=200;

/*void test01()
{
	Person p;
	cout<<p.m_a<<endl;
	Person p2;
	p2.m_a=200;//所有对象共享一份数据，有一个对象改了那这个静态变量就改变 
	cout<<p.m_a<<endl;//200
}*/
void test02()
{
	//因为静态变量不属于任何一个类，所以可以有两种访问方式
	//1.通过对象访问
	Person p;
	/*cout<<"对象访问："<<p.m_a<<endl;
	//2.通过类名进行访问 
	cout<<"类名访问："<<Person::m_a<<endl;
	//cout<<"类名访问："<<Person::m_b<<endl;//错误，因为是private作用域 
	cout<<"对象访问："<<p.getm_b()<<endl;//但是可以用接口函数访问私有权限下的*/
	//静态成员变量
	//对象方式访问静态成员函数
	p.func(); 
	//类方式访问静态成员函数
	Person::func();
	cout<<p.m_a<<" "<<p.getm_b()<<endl;
}

int main()
{
	//test01();
	test02();
	return 0;
}
