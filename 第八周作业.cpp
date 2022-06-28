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

//声明一个Shape基类，在此基础上派生出Rectangle和Circle类
//，二者都有GetArea()函数计算对象的面积。使用Rectangle类创
//建一个派生类Square。
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
//定义一个基类有姓名、性别、年龄，再由基类派生出教师
//类和学生类，教师类增加工号、职称和工资，学生类增加学
//号、班级、专业和入学成绩。
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
		cout<<"姓名："<<name<<"\t"<<"性别："<<gender<<"\t"
		<<"年龄："<<age<<"\t"<<"工号："<<ID<<"\t"<<"职称："
		<<possetion<<"\t"<<"工资："<<salery<<"\t"<<endl;
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
		cout<<"姓名："<<name<<"\t"<<"性别："<<gender<<"\t"
		<<"年龄："<<age<<"\t"<<"学号："<<num<<"\t"<<"班级："
		<<room<<"\t"<<"专业："<<aspect<<"\t"<<"入学成绩："
		<<score<<"\t"<<endl; 
	}
};
int main()
{
	Teacher t("张雨佳","女",18,"9420","化学教授",100000);
	t.showinformation();
	Student s("王路明","男",19,"0249","一年一班","土木工程",10);
	s.showinformation();
}
*/
/*给出下面的基类：
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
要求：
(1)建立基类area_cl的两个派生类rectangle与isosceles，
让每个派生类都包含一个函数area()，分别用来返回矩形与
三角形的面积。用构造函数对height和width进行初始化。
(2)写出主程序，用来求height于width分别为10.0与5.0的矩形面积，
以及求height与width分别为4.0和6.0的三角形面积。
(3)要求通过使用基类指针访问虚函数的方法（即运行时的多态性）
分别求出矩形和三角形面积。*/

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


















