#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	int *p;
	int per;
	public:
	void setSubMarks(int s[])
	{
		p=s;
	}
	void calculatePer()
	{
		int agg=0;
		for(int i=0;i<6;i++)
		{
			agg=agg+p[i];
		}
	
		per=agg/6;
	}
	void checkGrades()
	{
		if(per>=75&&per<=100)
		{
			cout<<"\nStudent in Distinction..!";
		}
		else if(per>=60 &&per<75)
		{
			cout<<"\nStudent in First division..!";
		}
		else if(per>=50&&per<60)
		{
			cout<<"\nStudent in second division..!";
		}
		else if(per>=40&&per<50)
		{
			cout<<"\nStudent in third division..!";
		}
		else
		{
			cout<<"\nStudent is failed..:(";
		}
	}
};
int main()
{
	Student s1;
	int s[6];
	cout<<"Enter marks of six subject:\n";
	for(int i=0;i<6;i++)
	{
		cin>>s[i];
	}
	s1.setSubMarks(s);
	s1.calculatePer();
	s1.checkGrades();
	
}

