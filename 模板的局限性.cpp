#include<iostream>
using namespace std;

class Person
{
public:
	int age;
	Person(int a)
	{
		age=a;
	}
};
/*template<typename T>//这样是不对的 
bool compare(T &a,T &b)
{
	return a==b;//无法比较两个自定义类型数据 
}*/

template<typename T>
bool compare(T &a,T &b)//必须先写个正常的 再写特殊的 
{
	return a==b;
}
template<>bool compare(Person &p1,Person &p2)
{
	if(p1.age==p2.age) return 1;
	else return 0;
}
int main()
{
	Person p1(18);
	Person p2(18);
	int a=1,b=2;
	cout<<compare(a,b)<<endl;
	cout<<compare(p1,p2);
	
	return 0;
}
