/*#include<iostream>

using namespace std;

class cube
{
public:
	void setl(int m_l)//设置
	{
		l=m_l;
	}
	void setw(int m_w)
	{
		w=m_w;
	}
	void seth(int m_h)
	{
		h=m_h;
	}
	int getl()//获取 
	{
		return l;
	}
	int getw()
	{
		return w;
	}
	int geth()
	{
		return h;
	}
	//行为 
	int getS()
	{
		return 2*l*w+2*l*h+2*w*h;
	}
	int  gerV()
	{
		return h*l*w;
	}
	
	int issame(cube &c2)
	{
		if(l==c2.getl()&&w==c2.getw()&&h==c2.geth())
		return 1;
		else return 0;
	}
	
	
	//属性 
private:
	
	int l;
	int w;
	int h;
	
};

int issame(cube &c1,cube &c2)
{
	if(c1.getl()==c2.getl()&&c1.getw()==c2.getw()&&c1.geth()==c2.geth())
	return 1;
	else return 0;
}

int main()
{
	cube c1;
	c1.seth(10); 
	c1.setl(10); 
	c1.setw(10);
	
	cube c2;
	c2.seth(10);
	c2.setl(10);
	c2.setw(10);
	
	cout<<c1.getS() <<endl;
	
	cout<<c1.gerV() <<endl; 
	
	int ret=issame(c1,c2);
	if(ret==1)
	cout<<"两个立方体相同"<<endl;
	else
	cout<<"两个立方体不相同"<<endl;
	
	ret=c1.issame(c2);
	if(ret==1)
	cout<<"类中两个立方体相同"<<endl;
	else
	cout<<"类中两个立方体不相同"<<endl;
	
	system("pause");
	
	return 0;
}*/


#include<iostream>

using namespace std;

class point
{
private:
	int x;
	int y;
	
public:
	void setx(int m_x)
	{
		x=m_x;
	}
	void sety(int m_y)
	{
		y=m_y;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}
};


class circle
{
private:
	int r;
	
	point center;//圆心 

public:
	void setr(int m_r)
	{
		r=m_r;
	}
	int getr()
	{
		return r;
	}
	void setcenter(point c)
	{
		center=c;
	}
	point getcenter()
	{
		return center;
	}

};

int isincircle(circle &c,point &p)
{
	int m=(c.getcenter().getx()-p.getx())*(c.getcenter().getx()-p.getx());
	int n=(c.getcenter().gety()-p.gety())*(c.getcenter().gety()-p.gety());
	int z=c.getr()*c.getr();
	if(m+n>z)
	return 1;
	else if(m+n==z)
	return 0;
	else 
	return -1;
}


int main()
{
	circle c1;
	c1.setr(10); 
	
	point p;
	point center;
	center.setx(10);
	center.sety(0);
	c1.setcenter(center);
	p.setx(10);
	p.sety(10);     
	
	int ret=isincircle(c1,p);
	if(ret==1)
	cout<<"在圆外"<<endl;
	else if(ret==0)
	cout<<"在圆上"<<endl;
	else 
	cout<<"在圆内"<<endl; 
	
	
	system("pause");
	
	return 0;
}
























