//����һ�������࣬ʹ����Ԫ���������������>��
//���ȽϾ��δ�С��������ȽϽ����
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
		cout<<"��һ�������δ��ڵڶ���������"<<endl;
	}
	else
	{
		cout<<"��һ��������С�ڵڶ���������"<<endl; 
	}
}

int main()
{
	test01();
	return 0;
}
