#include <iostream>
#include <list>
using namespace std;

class matrix
{
public:
    int rows, cols;
    int **m = NULL;
    static int count;
    matrix(int r = 0, int c = 0)
    {
        if (r == 0 && c == 0)
        {
            cout << "For matrix " << count << endl;
            cout << "Enter no. of rows : ";
            cin >> rows;
            cout << "Enter no. of cols : ";
            cin >> cols;
            count++;
        }
        else
        {
            rows = r;
            cols = c;
        }
        m = new int *[rows];
        for (int i = 0; i < rows; i++)
        {
            m[i] = new int[cols];
        }
    }

    friend matrix &operator+(matrix &m1, matrix &m2);
    friend matrix &operator-(matrix &m1, matrix &m2);
    friend ostream &operator<<(ostream &, matrix &);
    friend istream &operator>>(istream &, matrix &);

    matrix &transpose(matrix &mat)
    {
        static matrix rMatrix( mat.cols,mat.rows);
        for (int i = 0; i < mat.rows; i++)
        {
            for (int j = 0; j < mat.cols; j++)
            {
                rMatrix.m[j][i] = mat.m[i][j];
            }
        }
        return rMatrix;
    }

    ~matrix()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] m[i];
        }
        delete[] m;
        m = NULL;
    }
};

int matrix::count = 1;

matrix &operator+(matrix &M1, matrix &M2)
{
    cout << "Addition of given matrices" << endl;
    static matrix rMatrix( M2.cols,M1.rows);
    for (int i = 0; i < M1.rows; i++)
    {
        for (int j = 0; j < M2.cols; j++)
        {
            rMatrix.m[i][j] = M1.m[i][j] + M2.m[i][j];
        }
    }
    return rMatrix;
}

matrix &operator-(matrix &M1, matrix &M2)
{
    cout << "substraction of given matrices" << endl;
    static matrix rMatrix(M1.rows, M2.cols);
    for (int i = 0; i < M1.rows; i++)
    {
        for (int j = 0; j < M2.cols; j++)
        {
            rMatrix.m[i][j] = M1.m[i][j] - M2.m[i][j];
        }
    }
    return rMatrix;
}

matrix &operator*(matrix &M1, matrix &M2)
{
    cout << "Multiplication of given matrices" << endl;

    static matrix rMatrix( M2.cols,M1.rows);
    int a = 0;
    for (int i = 0; i < M1.rows; i++)
    {
        for (int j = 0; j < M2.cols; j++)
        {
            rMatrix.m[i][j] = 0;
            a = 0;
            for (int k = 0; k < M2.rows;k++)
            {
               rMatrix.m[i][j]+= M1.m[i][k] * M2.m[k][j];
            }
        }
    }
    return rMatrix;
}

ostream &operator<<(ostream &COUT, matrix &mat)
{
    for (int i = 0; i < mat.rows; i++)
    {
        for (int j = 0; j < mat.cols; j++)
        {
            cout << mat.m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return COUT;
}

istream &operator>>(istream &CIN, matrix &M)
{
    for (int i = 0; i < M.rows; i++)
    {
        for (int j = 0; j < M.cols; j++)
        {
            cout << "M[" << i + 1 << "][" << j + 1 << "] : ";
            cin >> M.m[i][j];
        }
    }
    cout << endl;
    return CIN;
}

int main()
{
    matrix m1;
    matrix m2;
    cin >> m1;
    cout << m1;
    // m1 = m1.transpose(m1);
    // cout << m1;
    cin >> m2;
    // cout << m1;
    cout << m2;
    cout << m1 * m2;
    // m1.display_matrix();
    // cout << m1 + m2;
    return 0;
}