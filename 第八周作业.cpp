/*#include <iostream>
using namespace std;
class Base
{
int i;
public:
Base(int n){cout <<"Constucting base class" << endl;i=n;}
~Base(){cout <<"Destructing base class" << endl;}
void showi(){cout << i<< ",";}
int Geti(){return i;}
};
class Derived:public Base
{
int j;
Base aa;
public:
Derived(int n,int m,int p):Base(m),aa(p){
cout << "Constructing derived class" <<endl;
j=n;
}
~Derived()
{cout <<"Destructing derived class"<<endl;}
void show()
{Base::showi();
cout << j<<"," << aa.Geti() << endl;}
};
int main()
{ Derived obj(8,13,24);
obj.show();
}*/

//����һ��Shape���࣬�ڴ˻�����������Rectangle��Circle��
//�����߶���GetArea()�����������������ʹ��Rectangle�ഴ
//��һ��������Square��
/*#include<iostream>
const int Pi=3.14;
using namespace std;

class shape
{
protected:
	double s;
	
};

class Rectangle:public shape
{
public:
	Rectangle(double x1,double x2)
	{
		a=x1;b=x2;
	}
	double GetArea()
	{
		s=a*b;return s;
	}
private:
	double a,b;
};

class Circle:public shape
{
public:
	Circle(double x1)
	{
		r=x1;
	}
	double GetArea()
	{
		s=Pi*r*r;return s;
	}
private:
	double r;
};

class Square:public Rectangle
{
public:
	Square(double x1,double x2,double x3):Rectangle(x2,x3)
	{
		a=x1;
	}
	double GetArea()
	{
		s=a*a;return s;
	}
private:
	double a;
};

int main()
{
	Rectangle r(2,3);
    cout<<r.GetArea()<<endl;

    Circle c(4);
    cout<<c.GetArea()<<endl;

    Square s(6,2,3);
    cout<<s.GetArea()<<endl;
	
	return 0;
}
*/
//����һ���������������Ա����䣬���ɻ�����������ʦ
//���ѧ���࣬��ʦ�����ӹ��š�ְ�ƺ͹��ʣ�ѧ��������ѧ
//�š��༶��רҵ����ѧ�ɼ���
/*#include<iostream>

using namespace std;

#include<string>

class Person
{
	friend class Teacher;
	friend class Student;
private:
	string name,gender;
	int age;
};

class Teacher:public Person
{
private:
	string ID,possetion;
	double salery;
public:
	Teacher(string n,string g,int a,string i,string p,double s)
	{
		name=n;gender=g;age=a;ID=i;possetion=p;salery=s;
	}
	void showinformation()
	{
		cout<<"������"<<name<<"\t"<<"�Ա�"<<gender<<"\t"
		<<"���䣺"<<age<<"\t"<<"���ţ�"<<ID<<"\t"<<"ְ�ƣ�"
		<<possetion<<"\t"<<"���ʣ�"<<salery<<"\t"<<endl;
	}
};

class Student:public Person
{
private:
	string num,room,aspect;
	double score;
public:
	Student(string n,string g,int a,string nu,string r,string as,double s)
	{
		name=n;gender=g;age=a;num=nu;room=r;aspect=as;score=s;
	}
	void showinformation()
	{
		cout<<"������"<<name<<"\t"<<"�Ա�"<<gender<<"\t"
		<<"���䣺"<<age<<"\t"<<"ѧ�ţ�"<<num<<"\t"<<"�༶��"
		<<room<<"\t"<<"רҵ��"<<aspect<<"\t"<<"��ѧ�ɼ���"
		<<score<<"\t"<<endl; 
	}
};
int main()
{
	Teacher t("�����","Ů",18,"9420","��ѧ����",100000);
	t.showinformation();
	Student s("��·��","��",19,"0249","һ��һ��","��ľ����",10);
	s.showinformation();
}
*/
/*��������Ļ��ࣺ
class area_cl
{
protected:
	double height;
	double width;
public:
	area_cl(double r,double s)
	{
		height=r;
		width=s;
	}
	virtual double area()=0;
};
Ҫ��
(1)��������area_cl������������rectangle��isosceles��
��ÿ�������඼����һ������area()���ֱ��������ؾ�����
�����ε�������ù��캯����height��width���г�ʼ����
(2)д��������������height��width�ֱ�Ϊ10.0��5.0�ľ��������
�Լ���height��width�ֱ�Ϊ4.0��6.0�������������
(3)Ҫ��ͨ��ʹ�û���ָ������麯���ķ�����������ʱ�Ķ�̬�ԣ�
�ֱ�������κ������������*/

/*#include<iostream>

using namespace std;

class area_cl
{
protected:
	double height;
	double width;
public:
	area_cl(double r,double s)
	{
		height=r;
		width=s;
	}
	virtual double area()=0;
};

class rectangle:public area_cl
{

public:
	rectangle(double h,double w):area_cl(h,w)
	{}
	virtual double area()
	{
		return height*width;
	}
};

class isosceles:public area_cl
{
public:
	isosceles(double h,double w):area_cl(h,w)
	{}
	virtual double area()
	{
		return (height*width)/2;
	}
};

int main()
{
	area_cl *p;
	rectangle r(10.0,5.0);
	p=&r;
	cout<<p->area()<<endl;
	isosceles i(4.0,6.0);
	p=&i;
	cout<<p->area();
	return 0;
}*/


















