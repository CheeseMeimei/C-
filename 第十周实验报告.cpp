#include<iostream>

using namespace std;

class Date
{
	friend Date operator+(Date &d,int num);
	friend Date operator-(Date &d,Date &da);
	friend int operator>(Date &d,Date &da);
private:
	int year,month,day;
public:
	Date()
	{
		day=05;
		month=11;
		year=2003;
	}
	Date(int y,int m,int d)
	{
		day=d;month=m;year=y;
	}
	void display()
	{
		cout<<year<<","<<month<<","<<day<<endl;
	}
	
	Date operator+(Date& d)
	{
		Date temp;
		temp.year=this->year+d.year;
		temp.month=this->month+d.month;
		temp.day=this->day+d.day;
		return temp;
	}
};

Date operator-(Date &d,Date &da)
{
	Date temp;
	temp.year=d.year-da.year;
	temp.month=d.month-da.month;
	temp.day=d.day-da.day;
	return temp;
}
Date operator+(Date& d,int num)
	{
		Date temp;
		temp.year=num+d.year;
		temp.month=num+d.month;
		temp.day=num+d.day;
		return temp;
	}

int operator>(Date &d,Date &da)
{
	if(d.year==da.year)
	{
		if(d.month==da.month)
		{
			if(d.day==da.day)
			{
				return 1;
			}
			else if(d.day<da.day)
			{
				return 2;
			}
			else return 3;
		}
		else if(d.month<da.month)
		return 2;
		else return 3;
	}
	else if(d.year<da.year)
	return 2;
	else return 3;
 } 

void test01()
{
	Date d1;
	cout<<"��һ����������";
	d1.display();
	
	int year,month,day;
	cout<<endl<<"���ֶ�����ڶ��������� �� �� ��"<<endl;
	cin>>year>>month>>day;
	Date d2(year,month,day);
	cout<<"�ڶ�����������";
	d2.display();
	cout<<endl;
	
	Date d3=d1+d2;
	cout<<"������������Ӻ�"<<endl;
	d3.display();
	cout<<endl;
	
	cout<<"�������һ����������ӵ����֣�";
	int w=0;
	cin>>w;
	Date d4=d1+w;
	cout<<"��һ����������"<<w<<"��"<<endl;
	d4.display();
	cout<<endl;
	
	int a,b,c,e,f,g;
	cout<<"�������һ���˵ĳ���������"<<endl;
	cin>>a>>b>>c;
	cout<<endl<<"������ڶ����˵ĳ���������"<<endl;
	cin>>e>>f>>g;
	Date people1(a,b,c);
	Date people2(e,f,g);
	cout<<endl;
	if(people1>people2==2)
	{
		cout<<"��һ�����곤�ڵڶ�����"<<endl;
	}
	else if(people1>people2==3)
	{
		cout<<"�ڶ������곤�ڵ�һ����"<<endl;
	}
	else if(people1>people2==1)
	{
		cout<<"�������"<<endl;
	}
}

int main()
{
	test01();
	
	return 0;
} 
