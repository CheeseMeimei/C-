/*#include<iostream>

using namespace std;

#include<string>

class stu
{
	public:
	
	int num;
	
	print(num);	
};

void print(int num)
{
	cout<<"Ñ§ºÅ:"<<num<<endl;
}

int main()
{
	stu st1;
	st1.num=14;
	cout<<print(string name,int num);
	
	system("pause");
	
	return 0;
}*/


/*#include<iostream>

using namespace std;

const double PI=3.14;

class circle
{

	public:
	
	int r;
	
	double c()
	{
		return 2*PI*r;
	}
		
};

int main()
{
	
	circle c1;
	
	c1.r=10;
	
	cout<<c1.c()<<endl;
	
	system("pause");
	
	return 0;
}*/

#include<iostream>

using namespace std;

#include<string>

class stu
{

public:
	string name;
	int num;
	
	setname(string m_name)
	{
		name=m_name;
	}
	
	setnum(int m_num)
	{
		num=m_num;
	}
	
	
	void printf()
	{
		cout<<name<<endl;
		cout<<num<<endl;
	}
	
};



int main()
{
	
	stu st1;
	
	st1.setname("zhangsan");
	
	st1.setnum(1);
	
	st1.printf();
	
	system("pause");
	
	return 0;
}




















