//定义一个矩形类，使用友元函数重载运算符“>”
//来比较矩形大小，并输出比较结果。
#include<iostream>

using namespace std;

class fang
{
	friend bool operator>(fang& a,fang&b);
private:
	int hig,wid;
public:
	fang(int h,int w)
	{
		hig=h;wid=w;
	}
	int gets()
	{
		return hig*wid;
	}
};

bool operator>(fang& a,fang& b)
{
	if(a.gets()>b.gets())
	{ 
		return true;
	}
	else
	{
		return false;
	}
}

void test01()
{
	fang f1(1,2),f2(3,4);
	if(f1>f2)
	{
		cout<<"第一个长方形大于第二个长方形"<<endl;
	}
	else
	{
		cout<<"第一个长方形小于第二个长方形"<<endl; 
	}
}

int main()
{
	test01();
	return 0;
}
