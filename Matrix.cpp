#include<iomanip>

#include "Matrix.h"

using namespace std;

Matrix::Matrix(int a,int b)
{
    rol = a;
    col = b;
}
Matrix::setrol(int a)
{
    rol=a;
}

Matrix::getrol()
{
    return rol;
}

Matrix::setlie(int b)
{
    col=b;
}

Matrix::getlie()
{
    return col;
}

ostream &operator<<(ostream &output,const Matrix &number)
{
    for(int a=0;a<number.rol;a++)
    {
        for(int b=0;b<number.col;b++)
        {
            output<<number.numbers<<" ";

        }

        output<<endl;
    }

    return output;
}

istream &operator>>(istream &input,Matrix &number)
{

     input>>number.numbers;

     return input;
}

