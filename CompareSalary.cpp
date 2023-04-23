/*Q. WA to create the class name as Employee with field id,name and salary and compare the two employee object on basis of its salary
if first object salary is greater than second object salary then display the message first employee salary is greater otherwise print 
the message second employee salary is greater.*/
#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	int id;
	char name[100];
	int sal;
	public:
	void setvalue()
	{
		cout<<"\nEnter id name and salary:\t";
		cin>>id>>name>>sal;	
	}

	void operator <(Employee emp2)
	{
		if(this->sal<emp2.sal)
		{
			cout<<"\nSecond Employee salary is greater...!";
		}
		else
		{
			cout<<"\nFirst Employee salary is greater...!";
		}
	}
};
int main()
{
	Employee emp1,emp2;
	emp1.setvalue();
	emp2.setvalue();
	emp1<emp2;
	
}
