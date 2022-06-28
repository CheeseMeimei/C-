#include<iostream>

using namespace std;

int main()
{
	double sum=0,High=100;
	int cnt=0;
	
	while(High>0)
	{
		sum+=High;
		++cnt;
		High/=2;
		sum+=High;
		if(cnt==5)
		{
			cout<<"第5次落地时，共经过"<<sum
			<<"米 反弹了"<<High<<"米"<<endl; 
			return 0;
		}
	}
	
}
