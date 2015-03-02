#include <iostream>
#include "matrix.h"

using namespace std;

void matrixcalculator::configurematrix()
{
   for ( int i = 0 ; i < row ; i++ )
      for (int j = 0 ; j < coloumn ; j++ )
         cin >> matrix[i][j];
		cout << endl;	
}

void matrixcalculator::configurematrix(int a,int b,int c,int d)
{
  
         matrix[0][0]=a;
         matrix[0][1]=b;
         matrix[1][0]=c;
         matrix[1][1]=d;
		cout << endl;	
}

void matrixcalculator::addmat(matrixcalculator first , matrixcalculator second)
{
	   for ( int i = 0 ; i < row ; i++ )
      for (int j = 0 ; j < coloumn ; j++ )
        matrix[i][j]=first.matrix[i][j]+second.matrix[i][j];
		cout << endl;
}

void matrixcalculator::submat(matrixcalculator first , matrixcalculator second)
{
	  for ( int i = 0 ; i < row ; i++ )
      for (int j = 0 ; j < coloumn ; j++ )
 		matrix[i][j] = first.matrix[i][j] - second.matrix[i][j];	
}

void matrixcalculator::mulmat(matrixcalculator first , matrixcalculator second)
{
	for ( int i = 0 ; i < row ; i++ )
	{
      for (int j = 0 ; j < coloumn ; j++ )
      {
      	matrix[i][j]=0;
      	for (int k= 0; k < 2 ; k++)
	 matrix[i][j] = matrix[i][j] + (first.matrix[i][k] * second.matrix[k][j]);
	}
	}
}

void matrixcalculator::printmat()
{
	   for ( int i = 0 ; i < row ; i++ )
      for (int j = 0 ; j < coloumn ; j++ )
         cout << matrix[i][j];
		cout << endl;
}

