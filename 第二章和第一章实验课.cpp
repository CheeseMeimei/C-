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
			cout<<"��5�����ʱ��������"<<sum
			<<"�� ������"<<High<<"��"<<endl; 
			return 0;
		}
	}
	
}
