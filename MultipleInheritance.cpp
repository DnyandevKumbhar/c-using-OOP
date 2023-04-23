#include<iostream>
using namespace std;
class Acadamic
{
	protected:
	int *marks;
	public:
	void setMarks(int m[])
	{
		marks=m;
	}
};
class Sport
{
	protected:
	int smark;
	public:
	void setSportMark(int smark)
	{
		this->smark=smark;
	}
};
class Result:public Acadamic,public Sport
{
	int agg,per;
	public:
	void calResult()
	{
		agg=0;
		for(int i=0;i<6;i++)
		{
			agg=agg+marks[i];
		}
		per=((agg+smark)/7);
		cout<<"\nResult is:\t"<<per;
	}
};
int main()
{
	int a[6];
	cout<<"Enter marks of six subjects:\n";
	for(int i=0;i<6;i++)
	{
		cin>>a[i];
	}
	Result r;
	r.setMarks(a);
	r.setSportMark(65);
	r.calResult();
}
