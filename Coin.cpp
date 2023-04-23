#include<iostream>
using namespace std;
int acceptCoin(int c,int one,int two,int five)
{
	int total=0;
	if(c==100)
	{
		one+1;
	}
	else
	{
	 
	}
	total=one+(two*2)+(five*5);
	return total;
}
int main()
{
	int c,one,two,five;
	cout<<"Enter amount of cents, one's,two's and five doller coins:\t";
	cin>>c>>one>>two>>five;
	int result=acceptCoin(c,one,two,five);
	cout<<"\nTotal amount in dollers is:\t"<<result;
}
	

