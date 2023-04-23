#include<iostream>
#include<string.h>
using namespace std;

int i,j,t,b[5],l,m,e,f=1,l2,mid,end,flag=1;


void palindrome(int a[])
{
/*	for(i=0;i<5;i++)
	{
		b[i]=a[i];
	}*/
	for(i=0;i<m;i++)
	{
		if(a[i]!=a[e])
		{
			f=0;
			break;
		}
		e--;
	}
	if(f)
	{
		cout<<"\nArray is palindrome.";
	}
	else
	{
			cout<<"\nArray is not palindrome.";
	}
	
}
void palindrome(char ch[])
{
	for(i=0;i<mid;i++)
	{
		if(ch[i]!=ch[end])
		{
		 flag=0;
		 break;	
		}
		end--;
	}
	if(flag)
	{
		cout<<"\nString is palindrome.";
	}
	else
	{
		cout<<"\nString is not palindrome.";
	}
}
int main()
{
	int a[5];
	char ch[100];
	cout<<"\nEnter values in array:\t";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	l=sizeof(a)/sizeof(a[0]);
	m=l/2;
	e=l-1;
	palindrome(a);
	cout<<"\nEnter values in string:\t";
	cin>>ch;
	//gets(ch);
	l2=strlen(ch);
	mid=l2/2;
	end=l2-1;
	palindrome(ch);
}
