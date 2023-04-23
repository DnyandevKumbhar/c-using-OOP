#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	int id;
	char name[100];
	int Bsal;
	public:
	void setPersonalInfo(int id,char name[],int Bsal)
	{
		this->id=id;
		strcpy(this->name,name);
		this->Bsal=Bsal;
	}
	void setProgress(int progress)
	{
		if(progress>60)
		{
			Bsal=Bsal+(Bsal*30)/100;
		}
	}
	void show()
	{
		cout<<"\nID:\t"<<id<<"\tName:\t"<<name<<"\tSalary:\t"<<Bsal<<"\n";
	}
};
int main()
{
	Employee e;
	int id,Bsal,progress;
	char name[100];
	cout<<"\nEnter Id name and basic salary of employee:\n";
	cin>>id>>name>>Bsal;
	cout<<"\nEnter progress of employee:\t";
	cin>>progress;
	e.setPersonalInfo(id,name,Bsal);
	cout<<"\nEmployee details before increament:";
	e.show();
	e.setProgress(progress);
	cout<<"\nEmployee details after increament:";
	e.show();
	
	
}
