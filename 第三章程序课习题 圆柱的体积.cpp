#include<iostream>

using namespace std;

const double Pi=3.14;

class cylinder
{
public:
	cylinder(double m_r,double m_h)
	{
		r=m_r;h=m_h;
	}
	
	void calculateV()
	{
		V=Pi*r*r*h;
	}
	
	void vol()
	{
		cout<<V<<endl;
	}
private:
	double r,h,V;	
};

int main()
{
	double r,h;
	cin>>r>>h;
	cylinder c(r,h);
	c.calculateV();
	c.vol();
	
	return 0;
}
