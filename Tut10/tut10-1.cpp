#include <iostream>

using namespace std;

void display_matrix(int matrix[4][4], int matrix_size);
int row_sum(int matrix[4][4], int matrix_size);
int column_sum(int matrix[4][4], int matrix_size);
int diagonal_sum(int matrix[4][4], int matrix_size);
void switch_pos(int matrix[4][4], int matrix_size);

bool isSumRowEqual = false;
bool isSumColumnEqual = false;
bool isSumDiagonalEqual = false;

int main()
{
    int matrix_size = 4;
    int matrix[4][4];

    for (int i = 0; i < matrix_size; i++)
    {
        for (int j = 0; j < matrix_size; j++)
        {
            cout << "Enter a value for " << i + 1 << " x " << j + 1 << " in the 4 x 4 matrix: ";
            cin >> matrix[i][j];

            while (matrix[i][j] < 1 || matrix[i][j] > 16)
            {
                cout << "Enter a value between 1 and 16 for " << i + 1 << " x " << j + 1 << " in the 4 x 4 matrix: ";
                cin >> matrix[i][j];
            }
        }
    }
    display_matrix(matrix, matrix_size);
    cout << " " << endl;
    row_sum(matrix, matrix_size);
    column_sum(matrix, matrix_size);
    diagonal_sum(matrix, matrix_size);

    if (isSumRowEqual == true && isSumColumnEqual == true && isSumDiagonalEqual == true)
    {
        cout << "The sum of the rows, columns and diagonals are equal to each other" << endl;
    }
    else
    {
        cout << "The sum of the rows, columns and diagonals are not equal to each other" << endl;
    }

    cout << " " << endl;
    cout << "The matrix has now been flipped along its diagonal" << endl;
    switch_pos(matrix, matrix_size);
    display_matrix(matrix, matrix_size);

    return 0;
}
int row_sum(int matrix[4][4], int matrix_size)
{
    int totalsum;

    for (int i = 0; i < matrix_size; i++)
    {
        for (int j = 0; j < matrix_size; j++)
        {
            totalsum += matrix[i][j];
        }
    }
    cout << "The sume of a row is " << totalsum << endl;

    return totalsum;
}
int column_sum(int matrix[4][4], int matrix_size)
{
    int totalsum;

    for (int i = 0; i < matrix_size; i++)
    {
        for (int j = 0; j < matrix_size; j++)
        {
            totalsum += matrix[j][i];
        }
    }
    cout << "The sume of a column is " << totalsum << endl;
    return totalsum;
}
int diagonal_sum(int matrix[4][4], int matrix_size)
{
    int totalSum1, totalSum2;

    for (int i = 0; i < matrix_size; i++)
    {
        totalSum1 = matrix[i][i];
    }
    for (int j = 0; j < matrix_size; j++)
    {
        totalSum2 = matrix[j][matrix_size - 1 - j];
    }

    // cout << "The sume of a diagonal is " << totalSum1 << endl;
    // if (totalsum == totalsum == totalsum == totalsum)
    // {
    //     isSumDiagonalEqual = true;
    // }

    // return isSumDiagonalEqual;
}

void display_matrix(int matrix[4][4], int matrix_size)
{
    for (int i = 0; i < matrix_size; i++)
    {
        for (int j = 0; j < matrix_size; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << " " << endl;
    }
}

void switch_pos(int matrix[][4], int matrix_size)
{
    int flip;

    for (int i = 0; i < matrix_size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            flip = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = flip;
        }
    }
}