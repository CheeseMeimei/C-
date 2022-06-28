#include<iostream>

using namespace std;

int * func()
{
	int *p=new int(10);
	return p;
}

int main()
{
	int* c=func();
	cout<<*c<<endl;
}
