#include <iostream>
#include <cassert>
#include "Matrix.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    srand(time(NULL));
    int rows, columns;
    cout <<"Enter data from the first Matrix: " << endl;
    cout <<"Number of rows: "; cin >> rows;
    cout <<"Number of columns: "; cin >> columns;
    Matrix m1(rows,columns);
    m1.fillMatrix();
    cout <<"Printing Matrix: " << endl;
    cout <<"Matrix1: " << endl;
    m1.showMatrix();
    cout <<"Enter data from a second Matrix: " << endl;
    cout <<"Number of rows: "; cin >> rows;
    cout <<"Number of columns "; cin >> columns;
    Matrix m2(rows,columns);
    m2.fillMatrix();
    cout <<"Matrix2: " << endl;
    m2.showMatrix();
    cout <<"Matrix sum: " << endl;
    Matrix m3 = m1+m2;
    /*assert(m3.mMatrix[0][0]==6);
    m3.showMatrix();
    cout << endl;
    Matrix m4 = m1*m2;
    cout <<"Matrix multiplication: " << endl;
    m4.showMatrix();
    Matrix m5 = m1*5;
    m5.showMatrix();
    cout <<"Transpose Matrix: "  << endl;
    m5.transpose();
    m5.showMatrix();*/


    return 0;
}