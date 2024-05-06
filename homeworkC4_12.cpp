#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>

using namespace std;

const int length =25;

int main()
{
	char fileName1[length], fileName2[length], fileName3[length];
	cout<<"Ten tep tin 1: ";
	cin>>fileName1;
	cout<<"Ten tep tin 2: ";
	cin>>fileName2;
	cout<<"Ten tep tin 3: ";
	cin>>fileName3;
	
	ifstream fileIn1(fileName1, ios::in);
	ifstream fileIn2(fileName2, ios::in);
	if(!fileIn1)
	{
		cout<<"\nKhong the mo tep tin: "<<fileName1<<endl;
	}
	if(!fileIn2)
	{
		cout<<"\nKhong the mo tep tin: "<<fileName2<<endl;
	}
	
	ofstream fileOut(fileName3, ios::out);
	
	char in1, in2;
	
	while(fileIn1)
	{
		fileIn1>>in1;
		fileOut<<in1;
		cout<<endl<<in1;
	}
	while(fileIn2)
	{
		fileIn2>>in2;
		fileOut<<in2;
	}
	cout<<in1<<endl<<in2;
	fileIn1.close();
	fileIn2.close();
	fileOut.close();
	getch();
}