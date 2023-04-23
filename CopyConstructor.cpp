/*WAP to create the classname as Player with array of object size  and copy the content of all five players in another five objects.*/
#include<iostream>
#include<string.h>
using namespace std;
class Player
{
	int id;
	char name[100];
	int run;
	public:
	Player()
	{
		
	}
	void setdata()
	{
		cout<<"Enter id name and run\n";
		cin>>id>>name>>run;
	}
	Player(Player &p)
	{
		this->id=p.id;
		strcpy(this->name,p.name);
		this->run=p.run;
	}
	void show()
	{
		cout<<id<<"\n\t"<<name<<"\t"<<run<<"\n";
	}
	
};
int main()
{
//	Player p1[5];
	Player *p1=new Player[5];
	for(int i=0;i<5;i++)
	{
		 p1[i].setdata();
	}	
	
	for(int i=0;i<5;i++)
	{
		p1[i].show();
	}
	
	Player *p2=new Player[5];
	for(int i=0;i<5;i++)
	{
		p2[i]=p1[i]; 
	}
/*	for(int i=0;i<5;i++)
	{
		p2[i].setdata();
	}*/


	for(int i=0;i<5;i++)
	{
		p2[i].show();
	}

	
}
