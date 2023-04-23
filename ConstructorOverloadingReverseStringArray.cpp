#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Reverse
{
	int *p,size,m1,e1;
	int l,m2,e2;
	//char ch[100];
	char *q;
	public:
	Reverse(int a[],int size,int m1,int e1)
	{
		p=a;
		this->size=size;
		this->m1=m1;
		this->e1=e1;
		for(int i=0;i<m1;i++)
		{
			int t=p[i];
			p[i]=p[e1];
			p[e1]=t;
			e1--;
		}
		cout<<"\nDisplay Reverse array:\n";
		for(int i=0;i<size;i++)
		{
			cout<<"\t"<<p[i];
		}
		
	}
	Reverse(char ch[],int l,int m2,int e2)
	{
		//strcpy(this->ch,ch);
		q=ch;
		this->m2=m2;
		this->e2=e2;
		for(int i=0;i<m2;i++)
		{
			char t1=q[i];
			q[i]=q[e2];
			q[e2]=t1;
			e2--;
		}
	cout<<"\nReverse string is:\t"<<q;
		
	}
};

int main()
{
	int size,m1,e1,*p;
	char *q;
//	char ch[100];
	cout<<"\nEnter size of array:\t";
	cin>>size;
	p=(int*)malloc(sizeof(int)*size);
	cout<<"\nEnter elements in array:\n";
	for(int i=0;i<size;i++)
	{
		cin>>p[i];
	}
	m1=size/2;
	e1=size-1;
	Reverse s1(p,size,m1,e1);
	q=(char*)malloc(sizeof(char)*100);
	cout<<"\nEnter values in string:\t";
	cin>>q;
	
//cin>>ch;
	//gets(ch);
	int l=strlen(q);
	int m2=l/2;
	int e2=l-1;
	Reverse s2(q,l,m2,e2);
	
	
}
