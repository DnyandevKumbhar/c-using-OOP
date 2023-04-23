#include<iostream>
#include<string.h>
using namespace std;
class StringParent
{
	protected:
	char ch[100];
	public:
		void setValue(char ch[])
		{
			strcpy(this->ch,ch);
		}
};
class CheckAllSameChar:public StringParent
{
	public:
	int verifyAllSameChar()
	{
		for(int i=0;ch[i]!=0;i++)
		{
			if(ch[i]!=ch[i+1])		
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
};
int main()
{
	CheckAllSameChar c;
	char ch[90];
	cout<<"\nEnter values in string:\t";
	cin>>ch;
	c.setValue(ch);
	int r=c.verifyAllSameChar();
	if(r)
	{
		cout<<"\nString contain all same character..!";
	}
	else
	{
		cout<<"\nString contain different character.";
	}
	
}
