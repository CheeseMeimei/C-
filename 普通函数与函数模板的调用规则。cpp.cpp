#include<iostream>

using namespace std;

void func(int a,int b)
{
	cout<<"普通函数的调用"<<endl;
}
template<typename T>
void func(T a,T b)
{
	cout<<"函数模板的调用"<<endl;
}

int main()
{
	
	int a ;int b;
	func<>(a,b);
	return 0;
}
