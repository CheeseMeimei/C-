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
	A operator--(int)//int��ռλ������������ǰ�úͺ���
	{
		A c=*this;
		
		m_a--;
		
		return c;
	 } 
	
};

ostream& operator<<(ostream &cout,A a)//��ֵ���ݣ���Ϊ����++�� ���ص���ֵ������ʵ����ֵ���� 
{
	cout<<"m_a="<<a.m_a;
	return cout; 
}

void test01()//ǰ��-- 
{
	A a(1);
	cout<<"ǰ��-- "<<--a<<endl;
	cout<<"ǰ��--�� "<<a<<endl;
}

void test02()//����-- 
{
	A b(1);
	cout<<"����-- "<<b--<<endl;
	cout<<"����--�� "<<b<<endl;
}

int main()
{
	test01();
	
	test02();
	
	return 0;
}
