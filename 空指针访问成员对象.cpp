#include<iostream>

using namespace std;

class person
{
	
public:
	int age;
	
	void show()
	{
		cout<<"this is person class"<<endl;
	}
	
	void func()
	{
		if(this==NULL)
		return; 
		cout<<this->age<<endl;
	}
};

void test01()
{
	person* p=NULL;
	
	p->func();
	
	p->show();
}

int main()
{
	test01();
	
	
	system("pause");
	
	return 0;
 } 
