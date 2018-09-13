#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

void addMatrices()
{
	int r, c, a[100][100], b[100][100], sum[100][100], i, j;

	cout << "Enter number of rows (between 1 and 100): ";
	cin >> r;

	cout << "Enter number of columns (between 1 and 100): ";
	cin >> c;

	cout << endl << "Enter elements of 1st matrix: " << endl;

	// Storing elements of first matrix entered by user.
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << "Enter element a" << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
		}
	cout << endl << "First matrix is: " << endl;
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << a[i][j] << "  ";
			if (j == c - 1)
				cout << endl;
		}

	// Storing elements of second matrix entered by user.
	cout << endl << "Enter elements of 2nd matrix: " << endl;
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << "Enter element b" << i + 1 << j + 1 << " : ";
			cin >> b[i][j];
		}
	cout << endl << "Second matrix is: " << endl;
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << b[i][j] << "  ";
			if (j == c - 1)
				cout << endl;
		}

	// Adding Two matrices
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
			sum[i][j] = a[i][j] + b[i][j];

	// Displaying the resultant sum matrix.
	cout << endl << "Sum of two matrix is: " << endl;
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << sum[i][j] << "  ";
			if (j == c - 1)
				cout << endl;
		}


}


void subtractMatrices()
{
	int r, c, a[100][100], b[100][100], sub[100][100], i, j;

	cout << "Enter number of rows (between 1 and 100): ";
	cin >> r;

	cout << "Enter number of columns (between 1 and 100): ";
	cin >> c;

	cout << endl << "Enter elements of 1st matrix: " << endl;

	// Storing elements of first matrix entered by user.
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << "Enter element a" << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
		}
	cout << endl << "First matrix is: " << endl;
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << a[i][j] << "  ";
			if (j == c - 1)
				cout << endl;
		}

	// Storing elements of second matrix entered by user.
	cout << endl << "Enter elements of 2nd matrix: " << endl;
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << "Enter element b" << i + 1 << j + 1 << " : ";
			cin >> b[i][j];
		}
	cout << endl << "Second matrix is: " << endl;
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << b[i][j] << "  ";
			if (j == c - 1)
				cout << endl;
		}

	// Subtracting Two matrices
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
			sub[i][j] = a[i][j] - b[i][j];

	// Displaying the resultant subtracted matrix.
	cout << endl << "Subtraction of two matrix is: " << endl;
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << sub[i][j] << "  ";
			if (j == c - 1)
				cout << endl;
		}


}

void multiplyMatrices()
{
	int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

	cout << "Enter rows and columns for first matrix: ";
	cin >> r1 >> c1;
	cout << "Enter rows and columns for second matrix: ";
	cin >> r2 >> c2;

	// If column of first matrix in not equal to row of second matrix,
	// ask the user to enter the size of matrix again.
	while (c1 != r2)
	{
		cout << "Error! column of first matrix not equal to row of second.\n";

		cout << "Enter rows and columns for first matrix: ";
		cin >> r1 >> c1;

		cout << "Enter rows and columns for second matrix: ";
		cin >> r2 >> c2;
	}

	// Storing elements of first matrix.
	cout << endl << "Enter elements of matrix 1:" << endl;
	for (i = 0; i < r1; ++i)
		for (j = 0; j < c1; ++j)
		{
			cout << "Enter element a" << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
		}
	

	// Storing elements of second matrix.
	cout << endl << "Enter elements of matrix 2:" << endl;
	for (i = 0; i < r2; ++i)
		for (j = 0; j < c2; ++j)
		{
			cout << "Enter element b" << i + 1 << j + 1 << " : ";
			cin >> b[i][j];
		}

	// Initializing elements of matrix mult to 0.
	for (i = 0; i < r1; ++i)
		for (j = 0; j < c2; ++j)
		{
			mult[i][j] = 0;
		}

	// Multiplying matrix a and b and storing in array mult.
	for (i = 0; i < r1; ++i)
		for (j = 0; j < c2; ++j)
			for (k = 0; k < c1; ++k)
			{
				mult[i][j] += a[i][k] * b[k][j];
			}

	// Displaying the multiplication of two matrix.
	cout << endl << "Output Matrix: " << endl;
	for (i = 0; i < r1; ++i)
		for (j = 0; j < c2; ++j)
		{
			cout << " " << mult[i][j];
			if (j == c2 - 1)
				cout << endl;
		}
	

}

void transposeMatrix()
{
	int a[10][10], trans[10][10], r, c, i, j;

	cout << "Enter rows and columns of matrix: ";
	cin >> r >> c;

	// Storing element of matrix entered by user in array a[][].
	cout << endl << "Enter elements of matrix: " << endl;
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << "Enter elements a" << i + 1 << j + 1 << ": ";
			cin >> a[i][j];
		}

	// Displaying the matrix a[][]
	cout << endl << "Entered Matrix: " << endl;
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << " " << a[i][j];
			if (j == c - 1)
				cout << endl << endl;
		}

	// Finding transpose of matrix a[][] and storing it in array trans[][].
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			trans[j][i] = a[i][j];
		}

	// Displaying the transpose,i.e, Displaying array trans[][].
	cout << endl << "Transpose of Matrix: " << endl;
	for (i = 0; i < c; ++i)
		for (j = 0; j < r; ++j)
		{
			cout << " " << trans[i][j];
			if (j == r - 1)
				cout << endl << endl;
		}


}

int main() {
	int choice;
	cout << "1. Add\n2. Subtract\n3. Multiply\n4. Transpose\n5. Exit\n\n";
	cin >> choice;
	if (choice == 1)
		addMatrices();
	else if (choice == 2)
		subtractMatrices();
	else if (choice == 3) {
		multiplyMatrices();
	}
	else if (choice == 4) {
		transposeMatrix();
	}
	else if (choice == 5) {
		return 0;
	}
	system("pause");
	return 0;
}




