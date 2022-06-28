#include<iostream>
#include<string>
using namespace std;

template<class T,class E>
class Person
{
private:
	T name;E age;
public:
	Person(T n,E a);
	
	void print();
		
};

template<class T,class E>
Person<T,E>::Person(T n,E a)
{
	name=n;age=a;
}

template<class T,class E>
void Person<T,E>::print()
{
	cout<<"姓名："<<name<<" 年龄："<<age;
}

template<class T,class E,class M>
class Son:public Person<T,E>
{
private:
	M gender;
public:
	Son(T n,E a,M g);
	void show();
	
};

template<class T,class E,class M>
Son<T,E,M>::Son(T n,E a,M g):Person<T,E>(n,a)
{
	gender=g;
}

template<class T,class E,class M>
void Son<T,E,M>::show()
{
	Person<T,E>::print();
	cout<<" 性别："<<gender;
}


int main()
{
	Son<string,int,string> s("张雨佳",19,"女");
	s.show();
	
	return 0;
}
