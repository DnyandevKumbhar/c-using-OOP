#include<iostream>
using namespace std;

class stud
{
	private:
		int id;
		char name[100];
		int marks;
	public:
		void getdata()
		{
			cout<<"Enter student id, name and marks\t";
			cin>>id>>name>>marks;
		}
		void show()
		{
			cout<<"\n\tID is:"<<id;
			cout<<"\n\tName is:"<<name;
			cout<<"\n\tmarks is:"<<marks;
		}
};
int main()
{
	stud d;
	d.getdata();
	d.show();
	
}
