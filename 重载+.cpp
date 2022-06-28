#include<iostream>

using namespace std;

class Person
{
	friend void test01();
	friend Person operator+(Person &p1,Person &p2);
	friend Person operator+(Person &p1,int a);
private:
	int m_a;
	int m_b;
public:
	Person operator+(Person &p)
	{
		Person temp;
		temp.m_a=this->m_a+p.m_a;
		temp.m_b=this->m_b+p.m_b;
		return temp;
	}
};
Person operator+(Person &p1,Person &p2)//�˴������ô��룬��Cû��Ӱ�죬����C������
//��Ӱ�죬��Ϊ�������ص���temp��ֵ��������Person&
//�������ֵ������ Person&�����β��Ƿ����ô���Ӱ��ܴ� 
	{
		 
		Person temp;
		temp.m_a=p1.m_a+p2.m_a;
		temp.m_b=p1.m_b+p2.m_b;
		return temp;
	}
Person operator+(Person &p1,int a) 
	{
		 
		Person temp;
		temp.m_a=p1.m_a+a;
		temp.m_b=p1.m_b+a;
		return temp;
	}
void test01()
{
	Person A;
	A.m_a=10;A.m_b=20;
	Person B;
	B.m_a=10;B.m_b=20;
	Person C;
	C=operator+(A,B);//����ȫ�ֺ���
	Person D=operator+(A,10); //���Խ��к������� 
	//C=A.operator+(B);//�������к��� 
	cout<<C.m_a<<" "<<C.m_b<<endl;
	cout<<D.m_a<<" "<<D.m_b<<endl;
}

int main()
{
	test01();
	return 0;
}
