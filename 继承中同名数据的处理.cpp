#include<iostream>

using namespace std;

class Base
{
public:
	static int m_a;
	void func()
	{
		cout<<"Base ��func��������"<<endl; 
	}
	void func(int a)
	{
		cout<<"Base ��func(a)��������"<<endl; 
	}
};
int Base::m_a=100;

class Son:public Base
{
public:
	static int m_a;
	void func()
	{
		cout<<"Son ��func��������"<<endl; 
	}
};
int Son::m_a=200;

void test01()//���ݳ�Ա 
{
	Son s;
	cout<<s.m_a<<endl;
	cout<<s.Base::m_a<<endl;
	cout<<"ͨ���������ʾ�̬���ݳ�Ա"<<endl;
	cout<<Son::m_a<<endl;
	cout<<Son::Base::m_a<<endl;//��һ��<<��˼�� ͨ���������ʣ��ڶ���<<��˼������ 
}

void test02()//������Ա
{
	Son s1;
	s1.func();
	s1.Base::func();
	//s1.func(1);//�ᱨ����Ϊ����͸���ͬ���󣬱������Ὣ������ͬ���������ذ������� 
 	s1.Base::func(1); 
 } 
int main()
{
	test01();
	test02();
	
	return 0;
}
