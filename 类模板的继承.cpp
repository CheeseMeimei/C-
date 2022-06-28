#include<iostream>
using namespace std;
#include<string>

template<class T>
class Base
{
private:
	T name;
public:
	Base(T n)
	{
		name=n;
	}
	void print()
	{
		cout<<"����Ϊ��"<<name;
	}
};

template<class T1,class T2>
class son:public Base<T1>
{
private:
	T2 age;
public:
	son(T1 n,T2 a):Base<T1>(n)
	{
		age=a;
	}
	void print()
	{
		Base<T1>::print();
		cout<<"����Ϊ��"<<age<<endl;
	}
};

int main()
{
	son<string,int> s("�����",18);
	s.print();
	return 0;
}
