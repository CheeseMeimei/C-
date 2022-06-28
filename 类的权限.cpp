#include<iostream>

using namespace std;

#include<string> 

class stu
{
private:
	
	string name="ÕÅÈı";
	
public:
	string  print()
	{
		return name;
	}
};

int main()
{
	
	stu t1;
	
	cout<<t1.print()<<endl;
	
	system ("pause");
	
	return 0;
}
