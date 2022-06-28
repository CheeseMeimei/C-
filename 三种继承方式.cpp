#include<iostream>

using namespace std;

class father
{
	friend void test01(); 
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
//公共继承
class son:public father 
{
	
public:
	void func()
	{
		m_a=10;
		m_b=20;
		//m_c=40;//在父类中是私有权限，子类访问不到 
	}
}; 

void test01()
{
	son s;
	s.m_a=20;
	s.m_b=40;//不能访问，因为父类中是保护权限，在子类中通过public方式继承
	//依然是保护权限，所谓在类外不可以访问 
	//友元函数在子类中和父类中加入都可以访问保护权限成员 
	cout<<s.m_a<<s.m_b<<endl;
}
//保护继承
class son2:protected father
{
	friend void test02(); 
public:
	void func()
	{
		m_a=10;
		m_b=10;
		//m_c=10; 父类中是私有权限 
	}
 };
 
void test02()
{
	son2 s2;
	s2.m_a=20;s2.m_b=40;//虽然父类中有公共权限，但是子类通过保护权限继承
	//在类外访问不到
	//通过友元 
	cout<<s2.m_a<<s2.m_b<<endl;
}
//私有继承
class son3:private father
{
public:
	void func()
	{
		m_a=100;
		m_b=100;
		//m_c=100;
	}
};
/*class grandson3:public son3//即使是用共有权限访问，但子类中是用私有权限继承的父类 
{
public:
	void func1()
	{
		m_a=100;
		m_b=100;
		m_c=100;
	}
};*/

int main()
{
	test01();
	test02();
	return 0;
}
