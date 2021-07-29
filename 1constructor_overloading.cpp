/*Write a program to demonstrate the Constructor Overloading, assume desired 
parameters.Write a program to demonstrate the Constructor Overloading, assume desired 
parameters.*/

#include<iostream>
using namespace std;
class Base
{
int a,b;
public:
Base()
{
a=42;
b=100;
}
Base(int x,int y)
{
a=x;
b=y;
}
void show_data();
};
void Base::show_data()
{
cout<< "a="<<a<< "\n"<< "b="<<b<<endl;
}
int main()
{

Base a1,a2(99,201);
a1.show_data();
a2.show_data();
}