/*WAP to create the class name as Product with two methods void setData() and showData(). 
product contain variables id,name,price and create the array of object using malloc
 and create the duplicated copy of product whose price is more than 100 repees*/
#include<iostream>
#include<string.h>
using namespace std;
 
 
class Product
{
 	int id,price;
 	char name[100];
 	public:
 	Product()
 	{
 				
 	}
 	void setData()
 	{
 		cout<<"\nEnter id name and price:\n";
 		cin>>id>>name>>price;
	 }
	 void showData()
	 {
	 	cout<<"\n"<<id<<"\t"<<name<<"\t"<<price<<"\n";
	 }
	 Product(Product &p)
	 {
	 	this->id=p.id;
	 	strcpy(this->name,p.name);
	 	this->price=p.price;
	 }
	 int getPrice()
	 {
	 	return price;
	 }

};
int main()
{
	Product *p1=new Product[5];
	for(int i=0;i<5;i++)
	{
		p1[i].setData();
	}
	for(int i=0;i<5;i++)
	{
		p1[i].showData();
	}
	Product *p2=new Product[5];
	int k;
	for(int i=0,k=0;i<5;i++)
	{
		if(p1[i].getPrice()>100)
		{
			p2[k]=p1[i];
			k++;	
		}
	}
	
	cout<<"\nproduct whose price is more than 100 repees :\n";
	for(int i=0;i<5;i++)
	{
		p2[i].showData();
	}
	
	
}
