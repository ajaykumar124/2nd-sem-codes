/*Write a program to implement an Account Class with member functions to Compute 
Interest , Show Balance, Withdraw and Deposit amount from the Account.*/

#include<iostream>
using namespace std;
class account{
public:
 char name[30];
 int acc_num;
 int balance;
 int amount;
 int getData()
 {
 cout<<"\nEnter the following details\nCustomer name:";
 gets(name);
 cout<<"\nAccount number:";
 cin >>acc_num;
 cout <<"\nAccount balance:";
 cin >>balance;
 }
void display()
 {
 cout<<"\nYour Account balance:"<<balance;
 }
int interest()
 {
 int t;
 cout<<"\nEnter time interval in year:";
 cin>>t;
 balance= balance*(1+2*t);
 display();
 }
 //deposit() function to deposit amount in account void deposit()
 {
 int bal;
 cout<< "\nEnter the amount to deposit:";
 cin>>bal;
 balance+=bal;
 cout<< "\nAmount deposited successfully\nYour new balance:"<<balance;
 }
 // to draw money from from Account
 void withdraw()
 {
 cout<<"\nEnter the amount you want to withdraw:";
 cin>>amount;
 if(amount>balance)
 cout<<"\nInsufficient balance";
 else
 balance=balance-amount;
 display();
 }
};
int main()
{
account ac;
ac.getData();
ac.display();
ac.deposit();
ac.withdraw();
}