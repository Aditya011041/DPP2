#include <iostream>
#define N 3
using namespace std;

void reverse_column(int arr[N][N])
{
    int k;
    for (int i = 0; i < N; i++)
    {
        k = N - 1;
        for (int j = 0; j < k; j++)
        {
            swap(arr[j][i], arr[k][i]);
            k--;
        }
    }
}

void transpose(int arr[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void print_matrix(int mat[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int mat[N][N];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << "The matrix before rotation:" << endl;
    print_matrix(mat);
    transpose(mat);
    cout << "The matrix after rotation - anticlockwise:" << endl;
    reverse_column(mat);
    print_matrix(mat);
    return 0;
}