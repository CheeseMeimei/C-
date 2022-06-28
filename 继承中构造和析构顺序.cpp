#include<iostream>

using namespace std;

class Base
{
	
public:
	
	//Base的构造函数
	Base()
	{
		cout<<"Baese 的构造函数调用"<<endl; 
	} 
	~Base()
	{
		cout<<"Base的析构函数调用"<<endl; 
	}
};
class Son:public Base
{
public:
	Son()
	{
		cout<<"Son 的构造函数调用"<<endl; 
	} 
	~Son()
	{
		cout<<"Son的析构函数调用"<<endl; 
	}
};

void test01()
{
	Son s;
	
}

int main()
{
	test01();
	
	system("pause");
	
	return 0;
}
