#include<iostream>

using namespace std;

class Person
{
	friend void date(Person *p);//��Ԫ���� 
public:
	Person()
	{
		name="�����";
		age=18;
	}
	
	string name;
private:
	int age;
};
void date(Person *p)//�˴������ú�ָ�붼���� 
{
	cout<<"��·���������������֣�"<<p->name<<endl;
	cout<<"��·����Ҫ����������䣺"<<p->age<<endl;//���� �����Է���˽������
	//������Ԫ�Ժ����ȷ 
}
void test01()
{
	Person p;
	date(&p);
}

int main()
{
	test01(); 
	return 0;
}
