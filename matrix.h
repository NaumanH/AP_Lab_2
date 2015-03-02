class matrixcalculator
{

	public:
	int row;
	int coloumn;
	int matrix[2][2];	
	
	matrixcalculator()
	{
	row=2;
	coloumn=2;
	}

	void configurematrix();
	void configurematrix(int a, int b, int c, int d);
	void addmat(matrixcalculator,matrixcalculator);
	void submat(matrixcalculator,matrixcalculator);
	void mulmat(matrixcalculator,matrixcalculator);
	void printmat();

};