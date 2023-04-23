#include<iostream>
#include<string.h>
using namespace std;

class Player
{
	private:
	int id;
	char name[100];
	int run;
	public:
	void getData(int d,char n[],int r)
	{
		id=d;
		strcpy(name,n);
		run=r;
	}
	void show()
	{
		cout<<"\t"<<id<<"\t"<<name<<"\t"<<run<<"\n";
	}
	int getRun()
	{
		return run;
	}
	
};
int main()
{
	Player p[5];
	int i,j;
	int d,r;
	char n[100];
	
		for(int i=0;i<5;i++)
		{
			cout<<"Enter ID, Name and runs\n";
			cin>>d>>n>>r;
			p[i].getData(d,n,r);
		}
	
	cout<<"Display Before sorting\n";
	for(i=0;i<5;i++)
	{
		p[i].show();
	}
	
	//apply sorting 
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			int pr=p[i].getRun();
			int nr=p[j].getRun();
			if(pr<nr)
			{
				Player t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
	cout<<"Display after sorting\n";
	for(i=0;i<5;i++)
	{
		p[i].show();
	}
	cout<<"Second highest run is:\n";
	
	p[1].show();
	
	
		
}

