#include<iostream>

using namespace std;

template<typename T>
void mysweap(T &a,T &b)
{
	T temp;
	temp=a;a=b;b=temp;
}

int main()
{
	int a=10,b=20;
	//mysweap(a,b);
	mysweap<int>(a,b);
	cout<<"a= "<<a<<"b= "<<b;
	return 0;
}
