#include<iostream>

using namespace std;

class calculate
{
protected:
	int num1,num2;
public:
	calculate(int n1,int n2)
	{
		num1=n1;num2=n2;
	}
	virtual int getresult()
	{
		return 0;
	}
};

class addcalculate:public calculate
{
public:
	addcalculate(int n1,int n2):calculate(n1,n2)
	{}
	int getresult()
	{
		return num1+num2;
	}
};

class subcalculate:public calculate
{
public:
	subcalculate(int n1,int n2):calculate(n1,n2)
	{}
	int getresult()
	{
		return num1-num2;
	}
};

class mulcalculate:public calculate
{
public:
	mulcalculate(int n1,int n2):calculate(n1,n2)
	{}
	int getresult()
	{
		return num1*num2;
	}
};

void test01()
{
	calculate c(20,10),*p;
	addcalculate ac(20,10);
	p=&ac;
	cout<<"��� "<<p->getresult()<<endl;
	subcalculate sc(20,10);
	p=&sc;
	cout<<"��� "<<p->getresult()<<endl;
	mulcalculate mc(20,10);
	p=&mc;
	cout<<"��� "<<p->getresult()<<endl;	
}

int main()
{
	test01();
	return 0;
}
