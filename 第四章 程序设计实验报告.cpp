#include<iostream>

using namespace std;

#include<string>

class information
{
public:
	information(string n,string g,string nu,string r)
	{
		name=n;gender=g;num=nu;room=r;
	}
	void print()
	{
		cout<<"������Ϣ��"<<endl;
		cout<<this->name<<" "<<this->gender<<" "<<this->num<<" "<<this->room<<endl;
	}
private:
	string name,gender;
	string num;
	string room;
};

class Student
{
public:
	Student(string n,string g,string nu,string r,double m,double c,double e)
	{
		name=n;gender=g;num=nu;room=r;m_score=m;c_score=c;e_score=e;
	}
	void print()
	{
		cout<<"ѧ����Ϣ��"<<endl;
		cout<<this->name<<" "<<this->gender<<" "<<this->num<<" "<<this->room<<endl;
		cout<<"��ѧ�ɼ���"<<this->m_score<<" ���ĳɼ���"<<this->c_score<<" Ӣ��ɼ���"<<this->e_score<<endl;
	}
private:
	string name,gender;
	string num;
	string room;
	double m_score,c_score,e_score;
};

class Teacher
{
public:
	Teacher(string n,string g,string nu,string r,string p,int a)
	{
		name=n;gender=g;num=nu;room=r;position=p;age=a;
	}
	void print()
	{
		cout<<"��ʦ��Ϣ��"<<endl;
		cout<<this->name<<" "<<this->gender<<" "<<this->num<<" "<<this->room<<endl;
		cout<<this->position<<" "<<this->age<<endl;
	}
private:
	string name,gender;
	string num;
	string room;
	string position;
	int age;
};

int main()
{
	information i("�����","��","110","΢��2014��");
	i.print();
	Student s("��·��","Ů","120","��֪���İ�",1,2,3);
	s.print();
	Teacher t("�����","Ů","150450����¥�º�����","΢��2107","��Ů",18); 
	t.print();
	return 0;
}
