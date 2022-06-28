#include<iostream>

using namespace std;

class Arry
{
	friend ostream& operator<<(ostream& cout,Arry a);
	friend Arry operator-(Arry& a,Arry& b);
	friend Arry operator+(Arry& a,Arry& b);
private:
	int a[2][2];
public:
	Arry(int a00=0,int a01=0,int a10=0,int a11=0)
	{
		a[0][0]=a00;a[0][1]=a01;a[1][0]=a10;a[1][1]=a11;
	}
	
};
Arry operator+(Arry &a,Arry& b)
	{
		Arry temp;
		int i,j;
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				temp.a[i][j]=b.a[i][j]+a.a[i][j];
			}
		}
		return temp;
	}
	Arry operator-(Arry& a,Arry& b)
	{
		Arry temp;
		int i,j;
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				temp.a[i][j]=a.a[i][j]-b.a[i][j];
			}
		}
		return temp;
	}
ostream& operator<<(ostream& cout,Arry a)
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<a.a[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

void test01()
{
	int n,m,x,y;
	cout<<"请输入第二个数组"<<endl;
	cin>>n>>m>>x>>y;
	Arry a(1,2,3,4);
	cout<<a<<endl;
	Arry b(n,m,x,y);
	cout<<b<<endl;
	Arry c=a+b;
	cout<<c<<endl;
	Arry d=a-b;
	cout<<d<<endl;
}

int main()
{
	test01();
	
	return 0;
}
