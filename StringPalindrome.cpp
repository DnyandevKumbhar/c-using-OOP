#include<iostream>
#include<string.h>
using namespace std;

class Palin
{
	private:
	char ch[100];
	public:
	void acceptStrig(char s[])
	{
		strcpy(ch,s);
	
	}
	int chkPali()
	{
		int l=strlen(ch);
		int mid=l/2;
		int end=l-1;
		int flag=1;
		for(int i=0;i<mid;i++)
		{
			
			if(ch[i]!=ch[end])
			{
				flag=0;
			}
			end--;
		}
		return flag;
	}
};
int main()
{
	Palin p;
	char s[100];
	cout<<"Enter value in string:\t";
	gets(s);
	p.acceptStrig(s);
	
	int f=p.chkPali();
	if(f)
	{
		cout<<"\nString is palindrome:";
	}
	else
	{
		cout<<"\nString is not palindrome:";
	}
}
