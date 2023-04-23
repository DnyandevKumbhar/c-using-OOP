#include<iostream>
using namespace std;
class Number
{
	protected:
	int no;
	public:
		void acceptValue(int x)
		{
			no=x;
		}
};
class RoundNumber:public Number
{
	public:
		void performRound()
		{
			if(no%10==0)
			{
				cout<<"\nRound number:\t"<<no;
			}
			else
			{
				int rem=no%10;
				if(rem<=5)
				{
					cout<<"\nRound number:\t"<<no-rem;
				}
				else if(rem>5)
				{
					int s=10-rem;
					cout<<"\nRound number:\t"<<no+s;
				}
				
			}
		}
};
int main()
{
	RoundNumber r;
	int no;
	cout<<"Enter Number:\t";
	cin>>no;
	r.acceptValue(no);
	r.performRound();
}
