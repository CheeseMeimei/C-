//2.21 注释的嵌套调用
/*#include<iostream>


using namespace std;

int main()
{
	//this is a test;你猜这样注释可以吗
	//答：这样可以 
	return 0; 
}*/

/*//2.22 斐波那契数列 

#include<iostream>


using namespace std;

int main()
{
	int *p=new int [20];
	int i;
	*p=1;
	*(p+1)=1;
	cout<<*p<<"\t"<<*(p+1)<<"\t";
	for(i=2;i<20;i++)
	{
		*(p+i)=*(p+i-1)+*(p+i-2);
		cout<<*(p+i)<<"\t";
		if((i+1)%5==0)
		{
			cout<<endl;
		}
	}
	delete []p;
	return 0;
}*/


/*#include<iostream>

#include<cmath>

using namespace std;

double sroot(int i)
{
	return sqrt((double)i);
}
double sroot(long i)
{
	return sqrt((double)i);
}
double sroot(double i)
{
	return sqrt (i);
}

int main()
{
	
	int i=12;
	long int a=1234;
	double b=1.1;
	cout<<"\tint 开方"<<sroot(i);
	cout<<"\tlong 开方"<<sroot(a);
	cout<<"\tdouble 开方"<<sroot(b);
	
	return 0;
}*/

/*#include<iostream>


using namespace std;

int main()
{
	int i,j,k,sum=0;
	
	for(i=0;i<=20;i++)
	{
		for(j=0;j<=50;j++)
		{
			if(100-i*5-j*2>=0)
			{
				sum++;
			}
		}
	}
	cout<<"一共有"<<sum<<"种算法"<<endl; 
	
	return 0;
}*/

/*#include<iostream>

using namespace std;

void sort(int &a,int &b);

int main()
{
	int i,j;
	
	cin>>i>>j;
	
	if(i>j) sort(i,j);
	
	cout<<i<<" "<<j;
	
	
	return 0;
}

void sort(int &a,int &b)
{
	int t;
	
	t=b;b=a;a=t;
}*/


















