#include<iostream>
#include<string.h>
using namespace std;
int i,j,t,l;
char te;											
void sort(int a[])
{
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	cout<<"\nDisplay the array after sorting:\n";
	for(i=0;i<5;i++)
	{
		cout<<"\t"<<a[i];
	}
}
void sort(char ch[])
{
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(ch[i]>ch[j])
			{
				te=ch[i];
				ch[i]=ch[j];
				ch[j]=te;
			}
		}
	}
	cout<<"\nDisplay string after sorting:\n"<<ch;
}
int main()
{
	int a[5];
	char ch[100];
	cout<<"\nEnter five values in array:\t";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
		
	sort(a);
	cout<<"\nEnter values in string:\t";
	
   cin>>ch;
//	cout<<ch; 
    
	//gets(ch);
	l=strlen(ch);
	
//	cout<<"\n"<<l;
	sort(ch);
}
