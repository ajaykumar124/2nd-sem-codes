//Write a program to demonstrate destructor call in the derived class

#include<iostream>
using namespace std;
class A
{
protected:
int a,b;
public:
A(int i,int j)
{
a=i;
b=j;
cout<< "A initialized"<<endl;
}
~A()
{
cout<< "\nDestructor in base class A"<<endl; }
};
class B:public A
{
int c,d;
public:
B(int m,int n,int o,int p ):A(m,n)
{
c=o;
d=p;
cout<< "B initialized";
}
~B()
{
cout<< "\nDestructor in derived class B"<<endl;
}
void display(void)
{
cout<< "\nThe value of a is :"<<a;
cout<< "\nThe value of b is :"<<b;cout<< "\nThe value of c is :"<<c;
cout<< "\nThe value of d is :"<<d;
}
};
int main()
{
 B objc(10,20,30,40);
objc.display();
return 0;}
