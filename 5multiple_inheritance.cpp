//Write a program to demonstrate multiple inheritances.

#include<iostream>
using namespace std;class A
{
int x,y;
public:
A()
{
x=1;
y=2;
}
void display_xy()
{
cout<< "x="<<x<<endl<< "y="<<y<<endl;
}
};
class B
{
int m,n;
public:
B()
{
m=3;
n=4;
}
void display_mn()
{
cout<< "m="<<m<<endl<< "n="<<n<<endl;
}
};
class C:public A,public B{
int i,j;
public:
C()
{
i=5;j=6;
}
void display_ij()
{
cout<< "i="<<i<<endl<< "j="<<j<<endl;
}
};
int main()
{
C c;
c.display_xy();
c.display_mn();
c.display_ij();
return 0;
}
