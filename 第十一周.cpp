/*
����һ���������������Ա����䣬���ɻ�����������ʦ���ѧ���ࡣ
��ʦ�����ӹ��š�ְ�ƺ͹��ʣ�ѧ��������ѧ�š��༶��רҵ����ѧ�ɼ���
���Ҫ��
1������麯�������ʦ��ѧ���Ļ�����Ϣ��
2�������ʦ��ƽ�����ʲ������
3��ʹ����Ԫ���������������<�����ҳ���ѧ�ɼ���ߵ�ѧ���������*/

#include<iostream>
#include<string>
using namespace std;

class Person
{
protected:
	string name,gender;
	int age;
public:
	Person(string n,string g,int a)
	{
		name=n;gender=g;age=a;
	}
	virtual void print()
	{
		cout<<"������"<<name<<" �Ա�"<<gender<<" ���䣺"<<age;
	}
};

class Teacher:public Person
{
private:
	string ID,title,salery;
public:
	Teacher(string n,string g,age a,string i,string t,string s):Person(n,g,a)
	{
		ID=i;title=t;salery=s;
	}
	void print()
	{
		Person::print();
		cout<<" ���ţ�"<<ID<<" ְ�ƣ�"<<title<<" ���ʣ�"<<salery; 
	}
};

class Student:public Person
{
private:
};

int main()
{
	
	return 0;
}
