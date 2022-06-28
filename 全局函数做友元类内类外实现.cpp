#include<iostream>
#include<string>
using namespace std;

template<class T1,class T2>
class Person;
void print(Person<T1,T2> &p)
{
	cout<<"������"<<p.name<<" ���䣺"<<p.age;
}

template<class T1,class T2>
class Person
{
private:
	T1 name;T2 age;
public:
	Person(T1 n,T2 a);
	//������ͨ�����ڳ�Ա����
	/*void print(Person<T1,T2> &p) 
	{
		cout<<"������"<<name<<" ���䣺"<<age;
	}*/
	//����ȫ�ֺ�������Ԫ����
	/*friend void print(Person<T1,T2> &p)//��Ϊ��Ա��������˽�г�Ա�ǺϷ�
	//�ģ����Ǽ���friend��˵����ȫ�ֺ�������ʵ�� 
	{
		cout<<"������"<<p.name<<" ���䣺"<<p.age;
	} */
	//ȫ�ֺ�������Ԫ����ʵ��
	friend void print(Person<T1,T2> &p); 
	
};

template<class T1,class T2>
Person<T1,T2>::Person(T1 n,T2 a)
{
	name=n;age=a;
}

int main()
{
	Person<string,int> p("�����",18);
	print(p);
	
	return 0;
}
