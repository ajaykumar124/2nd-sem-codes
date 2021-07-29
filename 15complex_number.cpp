/*Write a program to implement a class for complex numbers with add and multiply as 
member functions. Overload ++ operator to increment a complex number.*/

#include<iostream>
using namespace std;
class ComplexNum
{
private:
 int real,imag;
public: ComplexNum(int r=0,int i=0)
 {
 real=r;
 imag=i;
 }
 ComplexNum operator -(ComplexNum const &obj1)
 {
 ComplexNum obj2;
 obj2.real=real-obj1.real;
 obj2.imag=imag-obj1.imag;
 return obj2;
 }
 ComplexNum operator +(ComplexNum const &obj1)
{
 ComplexNum obj2;
 obj2.real=real+obj1.real;
 obj2.imag=imag+obj1.imag;
 return obj2;
}
ComplexNum operator *(ComplexNum const &obj1)
{
 ComplexNum obj2;
 obj2.real=(real*obj1.real)-(imag*obj1.imag);
 obj2.imag=(imag*obj1.real)+(real*obj1.imag);
 return obj2;
}
ComplexNum operator ++()
{
 ComplexNum obj2; obj2.real=++real;
 obj2.imag=++imag;
 return obj2;
}
void print()
{
 if(imag>=0)
 cout<<real<<"+i"<<imag<<endl;
 else
 cout<<real<<"+i("<< imag <<")"<<endl;
}
};
int main()
{
 ComplexNum comp1(15,-2), comp2(5,10);
 cout<<"the two complex numbers are:"<<endl;
 comp1.print();
 comp2.print();
 cout<<"the result of subtraction is:"<<endl;
 ComplexNum comp3=comp1-comp2;
 comp3.print();
 cout<<"the result of addition is:"<<endl;
 ComplexNum comp4=comp1+comp2;
 comp4.print();
 cout<<"the result of multiplication is:"<<endl;
 ComplexNum comp5=comp1*comp2;
 comp5.print();
 cout<<"increment complex number is:"<<endl;
 ComplexNum comp6=++comp1; comp6.print();
}

