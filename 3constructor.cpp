//Write a program to demonstrate constructor with default argument.

#include<iostream>
using namespace std;
class Base
{
public:
Base(int x=50,int y=47)
{
cout<<"Value of x = "<<x<<endl;
cout<<"Value of y = "<<y<<endl;
}
};
int main()
{
 
cout<<"Constructor is called 1 : "<<endl;
Base a1(4,981);
cout<<"Constructor is called 2 : "<<endl;
Base a2(8);
}