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
	cout<<"第一个操作数：";
	d1.display();
	
	int year,month,day;
	cout<<endl<<"请手动输入第二个操作数 年 月 日"<<endl;
	cin>>year>>month>>day;
	Date d2(year,month,day);
	cout<<"第二个操作数：";
	d2.display();
	cout<<endl;
	
	Date d3=d1+d2;
	cout<<"两个操作数相加后"<<endl;
	d3.display();
	cout<<endl;
	
	cout<<"请输入第一个操作数想加的数字：";
	int w=0;
	cin>>w;
	Date d4=d1+w;
	cout<<"第一个操作数加"<<w<<"后："<<endl;
	d4.display();
	cout<<endl;
	
	int a,b,c,e,f,g;
	cout<<"请输入第一个人的出生年月日"<<endl;
	cin>>a>>b>>c;
	cout<<endl<<"请输入第二个人的出生年月日"<<endl;
	cin>>e>>f>>g;
	Date people1(a,b,c);
	Date people2(e,f,g);
	cout<<endl;
	if(people1>people2==2)
	{
		cout<<"第一个人年长于第二个人"<<endl;
	}
	else if(people1>people2==3)
	{
		cout<<"第二个人年长于第一个人"<<endl;
	}
	else if(people1>people2==1)
	{
		cout<<"二人相等"<<endl;
	}
}

int main()
{
	test01();
	
	return 0;
} 
