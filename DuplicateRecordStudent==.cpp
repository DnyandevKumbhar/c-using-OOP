/*Q.WAP to create the class name  as student with id,name and per and create the array of object of student class and find the
same student record or duplicate student record */
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	int id;
	char name[100];
	int per;
	public:
	void setData()
	{
		cout<<"\nEnter student id name and percentage:\t";
		cin>>id>>name>>per;
	}
	void operator ==(Student s)
	{
	
			if(this->id==s.id && strcmp(this->name,s.name)==0 && this->per==s.per )				
			{
				cout<<"\nDuplicate record found..!";		
			}
			else
			{
				cout<<"\nNo Duplicate record ..!";
			}						
	}
};
int main()
{
	Student s[3];
	for(int i=0;i<3;i++)
	{
		s[i].setData();
	}
	for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<3;j++)
		{
			s[i]==s[j];	
		}
		
	}
}


