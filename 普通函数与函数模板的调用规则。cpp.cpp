#include<iostream>

using namespace std;

void func(int a,int b)
{
	cout<<"��ͨ�����ĵ���"<<endl;
}
template<typename T>
void func(T a,T b)
{
	cout<<"����ģ��ĵ���"<<endl;
}

int main()
{
	
	int a ;int b;
	func<>(a,b);
	return 0;
}
