#include<iostream>
#include<string.h>
using namespace std;
class ConvertToUpper
{
	char ch[100];
	public:
	void setCharArray(char ch[])
	{
		strcpy(this->ch,ch);
	}
	void convertToUpperCase()
	{
		for(int i=0;ch[i]!=0;i++)
		{
			if(ch[i]>='a'&&ch[i]<='z')
			{
				ch[i]=ch[i]-32;
			}
		}
		cout<<"\nString in Uppercase:\t"<<ch;
	}
};
int main()
{
	ConvertToUpper c;
	char ch[100];
	cout<<"Enter the values in string:\t";
	gets(ch);
	c.setCharArray(ch);
	c.convertToUpperCase();
}
