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
		cout<<"���Ǿ�̬��Ա����"<<endl;
		//�þ�̬��Ա�������ʾ�̬��Ա����
		m_a=300;
		m_b=645;
		//m_c=10;//�ⲻ�� ���ܷ��ʷǾ�̬��Ա���� 
	}
private:
	static int m_b;//��̬����Ҳ�з���Ȩ�� 
};

int Person:: m_a=100;
int Person:: m_b=200;

/*void test01()
{
	Person p;
	cout<<p.m_a<<endl;
	Person p2;
	p2.m_a=200;//���ж�����һ�����ݣ���һ����������������̬�����͸ı� 
	cout<<p.m_a<<endl;//200
}*/
void test02()
{
	//��Ϊ��̬�����������κ�һ���࣬���Կ��������ַ��ʷ�ʽ
	//1.ͨ���������
	Person p;
	/*cout<<"������ʣ�"<<p.m_a<<endl;
	//2.ͨ���������з��� 
	cout<<"�������ʣ�"<<Person::m_a<<endl;
	//cout<<"�������ʣ�"<<Person::m_b<<endl;//������Ϊ��private������ 
	cout<<"������ʣ�"<<p.getm_b()<<endl;//���ǿ����ýӿں�������˽��Ȩ���µ�*/
	//��̬��Ա����
	//����ʽ���ʾ�̬��Ա����
	p.func(); 
	//�෽ʽ���ʾ�̬��Ա����
	Person::func();
	cout<<p.m_a<<" "<<p.getm_b()<<endl;
}

int main()
{
	//test01();
	test02();
	return 0;
}
