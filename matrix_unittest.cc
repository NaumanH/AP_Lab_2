#include <limits.h>
#include "matrix.h"
#include "gtest/gtest.h"

//Test Case for Matrix Addition
TEST(AddTest, Matrix ){
	matrixcalculator a;
	a.configurematrix(1,1,1,1);
	matrixcalculator b;
	b.configurematrix(1,1,1,1);
	matrixcalculator res;
	res.addmat(a,b);


  EXPECT_EQ(res.matrix[0][0], 2 );
  EXPECT_EQ(res.matrix[0][1], 2 );
  EXPECT_EQ(res.matrix[1][0], 2 );
  EXPECT_EQ(res.matrix[1][1], 2 );
}

//Test Case for Matrix Subtraction
TEST(SubTest, Matrix ){
	matrixcalculator a;
	a.configurematrix(2,2,2,2);
	matrixcalculator b;
	b.configurematrix(1,1,1,1);
	matrixcalculator res;
	res.submat(a,b);


  EXPECT_EQ(res.matrix[0][0], 1 );
  EXPECT_EQ(res.matrix[0][1], 1 );
  EXPECT_EQ(res.matrix[1][0], 1 );
  EXPECT_EQ(res.matrix[1][1], 1 );
}

//Test Case for Matrix Multiplication
TEST(MultiplyTest, Matrix ){
	matrixcalculator a;
	a.configurematrix(2,2,2,2);
	matrixcalculator b;
	b.configurematrix(2,2,2,2);
	matrixcalculator res;
	res.mulmat(a,b);


  EXPECT_EQ(res.matrix[0][0], 8 );
  EXPECT_EQ(res.matrix[0][1], 8 );
  EXPECT_EQ(res.matrix[1][0], 8 );
  EXPECT_EQ(res.matrix[1][1], 8 );
}

//Test Case for Matrix Multiplication + Addition
TEST(MultAddTest, Matrix){
	matrixcalculator a;
	a.configurematrix(2,2,2,2);
	matrixcalculator b;
	b.configurematrix(2,2,2,2);
	matrixcalculator c;
	c.configurematrix(1,1,1,1);
	matrixcalculator res;
	res.mulmat(a,b);
	matrixcalculator final;
	final.addmat(res,c);

  EXPECT_EQ(final.matrix[0][0], 9 );
  EXPECT_EQ(final.matrix[0][1], 9 );
  EXPECT_EQ(final.matrix[1][0], 9 );
  EXPECT_EQ(final.matrix[1][1], 9 );

}

