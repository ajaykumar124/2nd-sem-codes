//Write a program to demonstrate friend function.

#include<iostream>
using namespace std;
class Addition
{
private:
int num1;
int num2;
int sum;
public:
Addition(int n1,int n2)
{
num1=n1;
num2=n2;
}
friend void add(Addition);};
void add(Addition a)
{
a.sum=a.num1+a.num2;
cout<< " Sum of "<<a.num1<<" and"<<a.num2<< " = "<<a.sum;
}
int main()
{
cout<< " Enter two numbers \n";
int num1,num2;
cin>> num1 >> num2;
Addition a(num1,num2);
add(a);
return 0;
}