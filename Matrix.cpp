#include <iostream>
#include "Matrix.h"

using std::cin;
using std::cout;
using std::endl;




Matrix::Matrix(int rows, int columns) {
    this->rows = rows;
    this->columns =columns;
    mMatrix.resize(rows);
    for(int i = 0; i < rows; i++){
        mMatrix[i].resize(columns);
    }
}

void Matrix::fillMatrix() {
    /*int zCount = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(zCount == 0.5*rows*columns){
                mMatrix[i][j] = 1;
            }
            else{
                mMatrix[i][j] = (rand()%2);
                if(mMatrix[i][j] == 0){
                    zCount++;
                }
            }
        }
    }*/
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cin >> mMatrix[i][j];
        }
    }
}

void Matrix::showMatrix() {
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << mMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

Matrix Matrix::operator+(const Matrix& Matrix2) {
    if((rows = Matrix2.rows) && (columns == Matrix2.columns)){
        Matrix Matrix3(rows,columns);
        for(int i = 0; i < rows;i++){
            for(int j = 0; j < columns; j++){
                Matrix3.mMatrix[i][j] = Matrix2.mMatrix[i][j] + mMatrix[i][j];
            }
        }
        return Matrix3;
    }
    else{
        Matrix Matrix3(rows,columns);
        for(int i = 0; i < rows;i++){
            for(int j = 0; j < columns; j++){
                Matrix3.mMatrix[i][j] = mMatrix[i][j];
            }
        }
        cout <<"Not able to sum, matrixes must be from the same order.";
        return Matrix3;
    }
}

Matrix Matrix::operator*(const Matrix & Matrix2) {
    Matrix Matrix3(rows,Matrix2.columns);
    for(int i = 0; i < Matrix3.rows; i++){
        for(int j = 0; j < Matrix3.columns; j++){
            Matrix3.mMatrix[i][j]=0;
            for(int k = 0; k < Matrix3.columns; k++){
                Matrix3.mMatrix[i][j] += mMatrix[i][k] * Matrix2.mMatrix[k][j];
            }
        }
    }
    return Matrix3;
}


Matrix Matrix::operator*(int number) {
    Matrix Matrix2(rows,columns);
    for(int i =0; i < rows; i++){
        for(int j = 0; j < columns;j++){
            Matrix2.mMatrix[i][j] = mMatrix[i][j];
        }
    }
    for(int i =0; i < rows; i++){
        for(int j = 0; j < columns;j++){
            Matrix2.mMatrix[i][j] = Matrix2.mMatrix[i][j]*number;
        }
    }
    return Matrix2;
}

void Matrix::transpose() {
    Matrix m2(columns, rows);
    for(int i = 0; i < columns; i++){
        for(int j = 0; j < rows; j++){
            m2.mMatrix[i][j] = mMatrix[j][i];
        }
    }
    for(int i = 0; i < columns; i++){
        for(int j = 0; j < rows; j++){
            mMatrix[i][j] = m2.mMatrix[i][j];
        }
    }

}

int Matrix::getRows() {
    return rows;
}

int Matrix::getColumns() {
    return columns;
}






