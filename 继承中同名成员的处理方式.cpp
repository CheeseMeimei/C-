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
		cout<<"����Base�е�func����"<<endl; 
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
		cout<<"����Son�е�func����"<<endl; 
	}
};

void test01()
{
	Son s;
	//����������ͬ����Ա����ֱ�ӵ��� 
	cout<<"Son�е�m_A="<<s.m_A<<endl;
	//����Ǹ���ͬ����Ա����Ҫ��������
	cout<<"Base�е�m_A="<<s.Base::m_A<<endl;
	//ͬ������Ҳһ����Ҫ�������� 
	s.func();
	
	s.Base::func();
}

int main()
{
	test01();
	
	system("pause");
	
	return 0;
}
