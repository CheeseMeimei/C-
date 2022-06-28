#include<iostream>
#include<string>
using namespace std;

template<class T1,class T2>
class Person;
void print(Person<T1,T2> &p)
{
	cout<<"姓名："<<p.name<<" 年龄："<<p.age;
}

template<class T1,class T2>
class Person
{
private:
	T1 name;T2 age;
public:
	Person(T1 n,T2 a);
	//这是普通的类内成员函数
	/*void print(Person<T1,T2> &p) 
	{
		cout<<"姓名："<<name<<" 年龄："<<age;
	}*/
	//这是全局函数做友元函数
	/*friend void print(Person<T1,T2> &p)//因为成员函数访问私有成员是合法
	//的，但是加了friend就说明是全局函数类内实现 
	{
		cout<<"姓名："<<p.name<<" 年龄："<<p.age;
	} */
	//全局函数做友元类外实现
	friend void print(Person<T1,T2> &p); 
	
};

template<class T1,class T2>
Person<T1,T2>::Person(T1 n,T2 a)
{
	name=n;age=a;
}

int main()
{
	Person<string,int> p("张雨佳",18);
	print(p);
	
	return 0;
}
