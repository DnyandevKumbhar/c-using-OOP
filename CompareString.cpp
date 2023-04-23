#include<iostream>
#include<string.h>
using namespace std;
 
 class SComp
 {
 	
 	private:
 		char first[100],second[100];
 		int l1,l2;
 	public:
 		
 
 	void accs(char f[],char s[])
 	{
 		strcpy(first,f);
 		strcpy(second,s);
 		 l1=strlen(first);
 		 l2=strlen(second);
 	//	cout<<l1<<l2;
	}
	void perComp()
	{
		if(l1==l2)
		{
			int flag=1,i=0;
			while(first[i]!=0)
			{
				int dif=first[i]-second[i];
				if(dif!=0)
				{
					flag=0;
					break;
					
				}
				++i;
			}
			if(flag)
			{
				cout<<"\nStrings are equal";
			}
			else
			{
			cout<<"\nStrings are not equal";
			}
		}
		else
		{
			cout<<"\nStrings are not equal";
		}
	}
 };
 
 int main()
 {
 	SComp c;
 	char f[100],s[100];
 	cout<<"\nEnter Value in first string:\t";
 	gets(f);
 	cout<<"\nEnter Value in second string:\t";
 	gets(s);
 	c.accs(f,s);
 	c.perComp();
 }
