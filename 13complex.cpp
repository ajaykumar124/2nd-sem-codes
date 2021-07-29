/*Write a program to implement a class ‘Complex’ of complex numbers .The class should be 
include member functions to add and subtract two complex numbers.*/

#include<iostream>
using namespace std;
class complex
{
public:
int real,img;
void add(complex c1,complex c2)
{
int x,y;
x=c1.real+c2.real;
y=c1.img+c2.img; cout<< "\n("<<c1.real<<"+"<<c1.img<<"i)+("<<c2.real<<"+"<<c2.im
g<<"i)=( "<<x<<"+"<<y<<"i)";
}
void subtract(complex c1,complex c2)
{
int x,y;
x=c1.real-c2.real;
y=c1.img-c2.img;
cout<< "\n("<<c1.real<<"+"<<c1.img<<"i)-
("<<c2.real<<"+"<<c2.img<<"i)=("<<x<<"+"<<y<<"i)";
}
};
int main()
{
 cout<<"name : ajay kumar"<<endl
 <<"roll no : 20/BIT/006"<<endl; 
complex a,b,c,d,e;
cout<< "\nEnter real and imaginary part of first complex number:";
cin>>a.real>>a.img;
cout<< "\nEnter real and imaginary part of second complex number:";
cin>>b.real>>b.img;
c.add(a,b);
d.subtract(a,b);
}