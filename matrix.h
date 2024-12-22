/* *************************************************
 *  Name: Denver Clark
 *  Assignment: Final Project
 *  Purpose: Header file for the Matrix class
 *           Defines the structure and methods of the class.
 ************************************************* */

#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>

class Matrix
{

private:
    std::vector<std::vector<int>> data; /* 2D array managed by std::vector */
    int rows;                           /* Number of rows */
    int columns;                        /* Number of columns */
    bool isSorted;                      /* Flag to track if the matrix is sorted */

public:
    /* ************************
     * Constructor
     * Creates a matrix of specified rows and columns.
     * Initializes all elements to `initValue`.
     *
     * @param int rows : number of rows
     * @param int columns : number of columns
     * @param int initValue : initial value for all elements
     * @exception std::invalid_argument : if rows or columns are less than 2
     * ************************/
    Matrix(int, int, int = 0);

    /* ************************
     * Destructor
     * Frees any resources held by the matrix.
     *
     * @param none
     * ************************/
    ~Matrix() = default; /* No explicit destructor - using std::vector */

    /* ************************
     * Matrix Methods:
     * ************************/
    void printMatrix() const;
    void printRow(int) const;
    void printColumn(int) const;

    int rowSum(int) const;
    double rowAverage(int) const;

    void sortMatrix();
    int min() const;
    int max() const;
    void rotateMatrix();
    bool findValue(int) const;

    void setElement(int, int, int);
    void setMatrix(int);

    /* ************************
     * Static Testing Method
     * ************************/
    static void runTests();
};

#endif