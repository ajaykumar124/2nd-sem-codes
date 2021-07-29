/*Write a program to implement a sphere class with appropriate members and 
member function to find the surface area and the volume.*/

#include<iostream>
#include<cmath>
using namespace std;
void userEntry(double& x,double& y);
const double pi=3.1419;
int main()
{
double surface ;
double volume;
userEntry(surface,volume);
cout<< "The surface area of the sphere is:"<<surface<<endl;
cout<< "The volume of the sphere is:"<<volume<<endl;
system( "pause");
return 0;
}void userEntry(double& x,double& y)
{
 cout<< "The value of pi is:"<<pi<<endl;
double r;
cout<< "Enter a value for radius: ";
cin>>r;
cout<<endl;
x =4.0*3.1419*(r*r);
y =(4.0/3.0)*3.1419*(r*r*r);
}