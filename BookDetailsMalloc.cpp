#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Book
{
	private:
	int id;
	char bname[100];
	char Aname[100];
	public:
	void setData(int d,char b[],char a[])
	{
		id=d;
		strcpy(bname,b);
		strcpy(Aname,a);
		cout<<"Enter Book ID , book name and auther name\n";
		cin>>id>>bname>>Aname;
		
	}	
	void show()
	{
		cout<<id<<"\t"<<bname<<"\t"<<Aname<<"\n";
	}
};
int main()
{
	Book *b;
	int id,size;
	char bn[100],an[100];
	cout<<"How many books required:\t";
	cin>>size;
	b=(Book *)malloc(sizeof(Book)*size);
	for(int i=0;i<size;i++)
	{
		b[i].setData(id,bn,an);
	}
	
	for(int i=0;i<size;i++)
	{
		b[i].show();
	}
}

