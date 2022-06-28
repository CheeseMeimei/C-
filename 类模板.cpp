#include<iostream>
using namespace std;
#include<string> 

template<class nametype,class agetype>
class Person
{
private:
	nametype name;
	agetype age;
public:
	Person(nametype n,agetype a)
	{
		name=n;age=a;
	}
	void print()
	{
		cout<<"ĞÕÃû£º"<<name<<" ÄêÁä£º"<<age;
	}
};

int main()
{
	Person<string,int> p1("ËïÎò¿Õ",18); 
	p1.print();
	return 0;
}
