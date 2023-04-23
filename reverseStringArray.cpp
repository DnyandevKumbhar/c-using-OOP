#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int i,j,t,l,L,mid,end,e,m;
char te;

void reverse(char ch[])
{
	for(i=0;i<mid;i++)
	{
		te=ch[i];
		ch[i]=ch[end];
		ch[end]=te;
		end--;
	}
	cout<<"\nDisplay String after reverse:\t"<<ch;
	
}
void reverse(int a[])
{
	for(i=0;i<m;i++)
	{
		t=a[i];
		a[i]=a[e];
		a[e]=t;
		e--;
	}
	cout<<"\nDisplay array after reverse:\n";
	for(i=0;i<6;i++)
	{
		cout<<"\t"<<a[i];
	}
}
int main()
{
	char ch[100];
	int a[6],i,j;
	cout<<"\nEnter values in string:\t";
	gets(ch);
	l=strlen(ch);
	mid=l/2;
	end=l-1;
	reverse(ch);
	cout<<"\nEnter values in array:\t"<<"\n";
	for(i=0;i<6;i++)
	{
		cin>>a[i];
	}
	L=sizeof(a)/sizeof(a[0]);
	m=L/2;
	e=L-1;
	reverse(a);
	
}
