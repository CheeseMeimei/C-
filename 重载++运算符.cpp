#include<iostream>

using namespace std;

class A
{
	friend ostream& operator<<(ostream &cout,A a);
private:
	int m_a;
public:
	A(int a)
	{
		m_a=a;
		cout<<"m_a="<<m_a<<endl;
	}
	A& operator--()
	{
		--m_a;
		return *this;
	}
	A operator--(int)//int是占位符，用来区分前置和后置
	{
		A c=*this;
		
		m_a--;
		
		return c;
	 } 
	
};

ostream& operator<<(ostream &cout,A a)//是值传递，因为后置++中 返回的是值，所以实参是值传递 
{
	cout<<"m_a="<<a.m_a;
	return cout; 
}

void test01()//前置-- 
{
	A a(1);
	cout<<"前置-- "<<--a<<endl;
	cout<<"前置--后 "<<a<<endl;
}

void test02()//后置-- 
{
	A b(1);
	cout<<"后置-- "<<b--<<endl;
	cout<<"后置--后 "<<b<<endl;
}

int main()
{
	test01();
	
	test02();
	
	return 0;
}
