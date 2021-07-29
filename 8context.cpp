//Write a program to append the content of the file

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 ofstream fout;
 ifstream fin;
 fin.open( "a.txt");
 fout.open( "a.txt",ios::app);
 if(fin.is_open())
 fout<< "\nWriting to a file opened from program.\n";
 cout<< "\nData has been appended to file";
 fin.close(); fout.close();
 return 0;
}