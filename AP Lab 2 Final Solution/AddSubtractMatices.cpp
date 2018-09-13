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

int main() {
	int choice;
	cout << "1. Add\n2. Subtract\n3. Multiply\n4. Transpose";
	cin >> choice;
	if (choice == 1)
		addMatrices();
	else if (choice == 2)
		subtractMatrices();
	else if (choice == 3) {
		//multiplyMatrices();
	}
	else if (choice == 4) {
		//transposeMatrix();
	}
	system("pause");
	return 0;
}




