#include<iostream>
using namespace std;
int& f(int &i)
{
	i+=10;
	return i;
}
int main()
{
	int k=0;
	int &m=f(k);
	cout<<k<<" ";
	m=20;
	cout<<k;
	return 0;
}
