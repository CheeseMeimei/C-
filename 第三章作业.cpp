/*��дһ������,��������ѧ��������,����ѧ�š�������
�ɼ���Ҫ�������Щѧ��������
�������ѧ��������ƽ���ɼ�(Ҫ��ѧ����
�����ܳɼ��þ�̬���ݳ�Ա��ʾ)��*/
#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
	string id;
	string name;
	double score;
	static int count;
	static double fen;
public:
	Student(string i,string n,double s)
	{
		id=i;name=n;score=s;
		count++;fen+=score;
	}
	void print()
	{
		cout<<this->name<<" "<<this->id<<" "<<this->score<<endl;
	}
	static int showcount()
	{
	return count;
	}
	static double showave()
	{
		return fen/count;
	 } 
};

int Student::count=0;
double Student::fen=0;

int main()
{
	Student s1("1001","Zhou",97),s2("1002","Zhan",65),s3("1003","Chen",88);
	s1.print();s2.print();s3.print();
	cout<<Student::showcount()<<" "<<Student::showave();
	return 0;
}
