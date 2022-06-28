#include<iostream>

using namespace std;

class score
{
public:
	void setscore(double e=90);
	void printscore();
	
private:
	double english;	
};

void score::setscore(double e)
{
	english=e;
}

void score::printscore()
{
	cout<<"Ó¢Óï³É¼¨Îª£º"<<english<<endl;
}

int main()
{
	double e1,e2;
	cin>>e1;
	score stu1,stu2;
	stu1.setscore(e1);
	stu1.printscore();
	cin>>e2;
	stu2.setscore(e2);
	stu2.printscore();
}
