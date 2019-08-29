#ifndef P1_MATRIX_H
#define P1_MATRIX_H

#include <vector>
#include <ctime>

using std::vector;

class Matrix {
private:
    int rows, columns;

public:
    Matrix(int, int);
    vector<vector<int> > mMatrix;
    void fillMatrix();
    void showMatrix();
    Matrix operator+(const Matrix&);
    Matrix operator*(const Matrix&);
    Matrix operator*(int);
    void transpose();
    int getRows();
    int getColumns();
};


#endif //P1_MATRIX_H
