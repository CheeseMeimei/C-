#include<iostream>

using namespace std;

template<typename T>
void sweap(T &a,T &b)
{
	T temp;
	temp=a;a=b;b=temp;
}
template<typename T,typename E>
void paixu(T arr[],E len)
{
	for(int i=0;i<len;i++)
	{
		int max=i;
		for(int j=i+1;j<len;j++)
		{
			if(arr[max]<arr[j])
			{
				max=j;
			}
		}
		if(max!=i)
		{
			sweap(arr[max],arr[i]);
		} 
	}
}
template<typename T,typename E>
void print(T arry[],E len)
{
	for(int i=0;i<len;i++)
	{
		cout<<arry[i]<<" "; 
	}
}

int main()
{
	char chararry[]="cabefh";
	int num=sizeof(chararry)/sizeof(char);
	paixu(chararry,num);
	print(chararry,num);
	
	int arry[]={8,6,7,2,4,3,5,1};
	int num1=sizeof(arry)/sizeof(int);
	paixu(arry,num1);
	print(arry,num1);
	return 0;
}



