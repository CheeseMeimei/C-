#include<iostream>

using namespace std;

class Person
{
	friend void test01();
	friend Person operator+(Person &p1,Person &p2);
	friend Person operator+(Person &p1,int a);
private:
	int m_a;
	int m_b;
public:
	Person operator+(Person &p)
	{
		Person temp;
		temp.m_a=this->m_a+p.m_a;
		temp.m_b=this->m_b+p.m_b;
		return temp;
	}
};
Person operator+(Person &p1,Person &p2)//此处用引用传入，对C没有影响，但对C后续的
//有影响，因为仅仅返回的是temp的值，并不是Person&
//如果返回值类型是 Person&，那形参是否引用传入影响很大 
	{
		 
		Person temp;
		temp.m_a=p1.m_a+p2.m_a;
		temp.m_b=p1.m_b+p2.m_b;
		return temp;
	}
Person operator+(Person &p1,int a) 
	{
		 
		Person temp;
		temp.m_a=p1.m_a+a;
		temp.m_b=p1.m_b+a;
		return temp;
	}
void test01()
{
	Person A;
	A.m_a=10;A.m_b=20;
	Person B;
	B.m_a=10;B.m_b=20;
	Person C;
	C=operator+(A,B);//调用全局函数
	Person D=operator+(A,10); //可以进行函数重载 
	//C=A.operator+(B);//调用类中函数 
	cout<<C.m_a<<" "<<C.m_b<<endl;
	cout<<D.m_a<<" "<<D.m_b<<endl;
}

int main()
{
	test01();
	return 0;
}
