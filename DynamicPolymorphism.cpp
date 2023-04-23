#include<iostream>
using namespace std;
class Value
{
    protected:
    int a,b;
    public:
    void setvalue(int x,int y)
    {
        a=x;
        b=y;
    }
    virtual int getresult()=0;


};
class Add:public Value
{
    public:
    int getresult()
    {
        return a+b;

    }
};
class Mul:public Value{
    public:
    int getresult()
    {
        return a*b;
    }
} ;
int main()
{
    Value *v;
    v=new Add();
    v->setvalue(10,20);
    int r=v->getresult();
    cout<<"\nAddtion is"<<r<<"\n";
    v=new Mul();
    v->setvalue(5,4);
    int r1=v->getresult();
    cout<<"Multiplication is"<<r1<<"\n";
} 
