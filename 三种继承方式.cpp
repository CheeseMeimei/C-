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
//�����̳�
class son:public father 
{
	
public:
	void func()
	{
		m_a=10;
		m_b=20;
		//m_c=40;//�ڸ�������˽��Ȩ�ޣ�������ʲ��� 
	}
}; 

void test01()
{
	son s;
	s.m_a=20;
	s.m_b=40;//���ܷ��ʣ���Ϊ�������Ǳ���Ȩ�ޣ���������ͨ��public��ʽ�̳�
	//��Ȼ�Ǳ���Ȩ�ޣ���ν�����ⲻ���Է��� 
	//��Ԫ�����������к͸����м��붼���Է��ʱ���Ȩ�޳�Ա 
	cout<<s.m_a<<s.m_b<<endl;
}
//�����̳�
class son2:protected father
{
	friend void test02(); 
public:
	void func()
	{
		m_a=10;
		m_b=10;
		//m_c=10; ��������˽��Ȩ�� 
	}
 };
 
void test02()
{
	son2 s2;
	s2.m_a=20;s2.m_b=40;//��Ȼ�������й���Ȩ�ޣ���������ͨ������Ȩ�޼̳�
	//��������ʲ���
	//ͨ����Ԫ 
	cout<<s2.m_a<<s2.m_b<<endl;
}
//˽�м̳�
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
/*class grandson3:public son3//��ʹ���ù���Ȩ�޷��ʣ�������������˽��Ȩ�޼̳еĸ��� 
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
