#include <iostream>
using namespace std;

class Matrix
{
private:

    int** M;
    int n;
    int j;

public:

    Matrix(int size);
    void Input();
    void Print();
    void MinValue();
    void MaxValue();
    void MatrSum();
    ~Matrix();
};

Matrix::Matrix(int size)
{
    n = size;
    M = new int* [n];
    for (int i = 0; i < n; i++)
        M[i] = new int[n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            M[i][j] = 0;
    cout << "\n";
}


Matrix::~Matrix()
{
    for (int i = 0; i < n; i++)
        delete[]M[i];
    delete[]M;
}

void Matrix::Input()
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cout << "[" << i << "][" << j << "]=";
            cin >> M[i][j];
            cout << "\n";
        }
}

void Matrix::Print()
{
    cout << " Your Matrix: " << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << " " << M[i][j] << " ";
        cout << "\n";
    }
    cout << "\n";
}

void Matrix::MinValue()
{
    int min = INT_MAX;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (M[i][j] < min)
            {
                min = M[i][j];
            }
        }

    }
    cout << " MIN = " << min << "\n";

}

void Matrix::MaxValue()
{
    int max = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (M[i][j] > max)
            {
                max = M[i][j];
            }
        }

    }
    cout << " MAX = " << max << "\n";
}

void Matrix::MatrSum()
{
    int Sum = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            Sum = Sum + M[i][j];
        }

    }
    cout << " SUM = " << Sum << "\n";
}


int main()
{
    int n;
    cout << "Input number of rows and colons in Matrix : ";
    cin >> n;
    Matrix A(n);
    A.Input();
    A.Print();
    A.MinValue();
    A.MaxValue();
    A.MatrSum();
    return 0;
}