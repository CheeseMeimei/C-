#include<iostream>
 
using namespace std;

class A
{
	friend ostream& operator<<(ostream &cout,A &a);
private:
	int m_a,m_b;
public:
	A(int a,int b)
	{
		m_a=a;m_b=b;
	}
};

ostream& operator<<(ostream &cout,A &a)//������operator<<(cout,a); 
{
	cout<<a.m_a<<" "<<a.m_b;
	return cout;
}

void test01()
{
	A a(20,10);
	cout<<a<<endl;//operator(cout,a)������cout �ٽ�<< 
}

int main()
{
	test01();
	
	return 0;
}
