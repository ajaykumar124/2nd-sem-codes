//Write a program to demonstrate destructor in inheritance.

#include<iostream>
using namespace std;
class base
{
public:
base()
{
cout<< "base class constructor"<<endl;
}
~base()
{
cout<< "base class destructor"<<endl;
}
};
class derived: public base
{public:
derived()
{
cout<< "derived class constructor"<<endl;
}
~derived()
{
cout<< "derived class destructor"<<endl;
}
};
int main()
{
 derived d;
return 0;
}