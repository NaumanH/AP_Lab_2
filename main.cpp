#include <iostream>
#include "matrix.h"

using namespace std;

int main()
{
matrixcalculator first;
matrixcalculator second;
matrixcalculator result;
int choice;

cout<<"Enter values to configure matrix"<<endl;
cout<<"First Matrix"<<endl;
first.configurematrix();
cout<<"Second Matrix"<<endl;
second.configurematrix();

cout<<"Please Choose From the Following"<<endl;
cout<<"1. Add"<<endl;
cout<<"2. Subtract"<<endl;
cout<<"3. Multiplication"<<endl;
cin>>choice;

switch (choice){

	case 1:
	{
	result.addmat(first,second);
	break;
	}

	case 2:
	{
	result.submat(first,second);
	break;
	}

	case 3:
	{
	result.mulmat(first,second);
	break;
	}
}

result.printmat();	
}