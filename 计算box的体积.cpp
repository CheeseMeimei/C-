#include<iostream>

using namespace std;

class box
{
public:
	box(int a,int b,int c);
	box(double a,double b,double c);
	
	void vol();
	
private:
	double m_a,m_b,m_c,V;
};

void box::vol()
	{
		V=m_a*m_b*m_c;
		cout<<"V="<<V<<endl;
	}
	
box::box(int a,int b,int c)
{
	m_a=a,m_b=b,m_c=c;
}

int main()
{
	int a1,b1,c1;
	cout<<"请输入长方体的长，宽，高"<<endl;
	cin>>a1>>b1>>c1;
	box x1(a1,b1,c1);
	x1.vol();
	int a2,b2,c2;
	cout<<"请输入长方体的长，宽，高"<<endl;
	cin>>a2>>b2>>c2;
	box x2(a2,b2,c2);
	x2.vol();
	return 0;
}
