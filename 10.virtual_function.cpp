//Write a program to demonstrate virtual function

#include<iostream>
using namespace std;
class A
{
public:
virtual void display()
{
cout<<"Class A display\n";
}
};
class B: public A
{
public:
void display()
{
cout<<"Class B display\n";
}
};
int main()
{
A a1,*a;
B b1;
a=&a1;
a->display();
a=&b1;
a->display();
}