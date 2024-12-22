/* *************************************************
 *  Name: Denver Clark
 *  Assignment: Final Project
 *  Purpose: Implementation file for the Matrix class
 ************************************************* */

#include "matrix.h"

Matrix::Matrix(int rows, int columns, int initValue)
    : rows(rows), columns(columns), isSorted(true), data(rows, std::vector<int>(columns, initValue))
{
    /* ************************
     * Constructor for the Matrix class
     * Initializes a matrix with specified dimensions and values.
     * Throws exception for invalid dimensions.
     *
     * @param int rows : number of rows
     * @param int columns : number of columns
     * @param int initValue : value to initialize the matrix
     * @exception std::invalid_argument : for invalid dimensions
     * @return none
     * ************************/

    if (rows < 2 || columns < 2)
    {
        throw std::invalid_argument("Matrix dimensions must be at least 2x2.");
    }
}

void Matrix::printMatrix() const
{
    /* ************************
     * Prints the entire matrix - formatted with spaces.
     *
     * @param none
     * @exception none
     * @return void
     * ************************/

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            std::cout << data[i][j] << " ";
        }

        std::cout << "\n";
    }
}

void Matrix::printRow(int row) const
{
    /* ************************
     * Prints the values of a specified row in a formatted way.
     *
     * @param int row : the row to print
     * @exception std::out_of_range : if the row index is invalid
     * @return void
     * ************************/

    if (row < 0 || row >= rows)
    {
        std::cout << "Error: Row index " << row << " is out of range. Valid range for your specified dimensions are 0 to " << rows - 1 << ".\nContinuing tests...\n";
        return;
    }

    for (int j = 0; j < columns; ++j)
    {
        std::cout << data[row][j] << " ";
    }

    std::cout << "\n";
}

void Matrix::printColumn(int col) const
{
    /* ************************
     * Prints the values of a specified column in a formatted way.
     *
     * @param int col : the column to print
     * @exception std::out_of_range : if the column index is invalid
     * @return void
     * ************************/

    if (col < 0 || col >= columns)
    {
        std::cout << "Error: Column index " << col << " is out of range. Valid range for your specified dimensions are 0 to " << columns - 1 << ".\nContinuing tests...\n";
        return;
    }

    for (int i = 0; i < rows; ++i)
    {
        std::cout << data[i][col] << "\n";
    }
}

int Matrix::rowSum(int row) const
{
    /* ************************
     * Returns the sum of all elements in the specified row.
     *
     * @param int row : the row to sum
     * @exception std::out_of_range : if the row index is invalid
     * @return int : the sum of the row
     * ************************/

    if (row < 0 || row >= rows)
    {
        throw std::out_of_range("Row index out of range.");
    }

    return std::accumulate(data[row].begin(), data[row].end(), 0);
}

double Matrix::rowAverage(int row) const
{
    /* ************************
     * Returns the average of all elements in the specified row.
     *
     * @param int row : the row to average
     * @exception std::out_of_range : if the row index is invalid
     * @return double : the average of the row
     * ************************/

    return static_cast<double>(rowSum(row)) / columns;
}

void Matrix::sortMatrix()
{
    /* ************************
     * Sorts each row of the matrix in ascending order.
     * Updates the sorted flag to true.
     *
     * @param none
     * @exception none
     * @return void
     * ************************/

    for (auto &row : data)
    {
        std::sort(row.begin(), row.end());
    }

    isSorted = true;
}

int Matrix::min() const
{
    /* ************************
     * Returns the minimum value in the matrix.
     *
     * @param none
     * @exception none
     * @return int : the minimum value
     * ************************/

    int minValue = data[0][0];

    for (const auto &row : data)
    {
        minValue = std::min(minValue, *std::min_element(row.begin(), row.end()));
    }

    return minValue;
}

int Matrix::max() const
{
    /* ************************
     * Returns the maximum value in the matrix.
     *
     * @param none
     * @exception none
     * @return int : the maximum value
     * ************************/

    int maxValue = data[0][0];

    for (const auto &row : data)
    {
        maxValue = std::max(maxValue, *std::max_element(row.begin(), row.end()));
    }

    return maxValue;
}

void Matrix::rotateMatrix()
{
    /* ************************
     * Rotates the matrix, making rows into columns and columns into rows.
     * Creates a new matrix with swapped dimensions and copies values.
     *
     * @param none
     * @exception none
     * @return void
     * ************************/

    std::vector<std::vector<int>> newData(columns, std::vector<int>(rows));

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            newData[j][i] = data[i][j];
        }
    }

    data = std::move(newData);

    std::swap(rows, columns);

    isSorted = false;
}

bool Matrix::findValue(int value) const
{
    /* ************************
     * Searches for a value in the matrix.
     * Uses binary search if the matrix is sorted; otherwise, uses linear search.
     *
     * @param int value : the value to search for
     * @exception none
     * @return bool : true if the value is found, false otherwise
     * ************************/

    bool found = false;

    if (isSorted)
    {
        /* Binary search for each row */

        for (const auto &row : data)
        {
            if (!found && std::binary_search(row.begin(), row.end(), value))
            {
                found = true;
            }
        }
    }
    else
    {
        /* Linear search for each row */

        for (const auto &row : data)
        {
            if (!found && std::find(row.begin(), row.end(), value) != row.end())
            {
                found = true;
            }
        }
    }

    return found;
}

void Matrix::setElement(int row, int col, int value)
{
    /* ************************
     * Sets the value of an element in the matrix.
     * Updates the sorted state based on the change.
     *
     * @param int row : the row index
     * @param int col : the column index
     * @param int value : the new value to set
     * @exception std::out_of_range : if row or col is invalid
     * @return void
     * ************************/

    if (row < 0 || row >= rows || col < 0 || col >= columns)
    {
        throw std::out_of_range("Index out of range.");
    }
    if (isSorted)
    {
        if ((col > 0 && value < data[row][col - 1]) ||
            (col < columns - 1 && value > data[row][col + 1]))
        {
            isSorted = false;
        }
    }

    data[row][col] = value;
}

void Matrix::setMatrix(int value)
{
    /* ************************
     * Sets all elements of the matrix to the specified value.
     * Marks the matrix as sorted since all elements are identical.
     *
     * @param int value : the value to set
     * @exception none
     * @return void
     * ************************/

    for (auto &row : data)
    {
        std::fill(row.begin(), row.end(), value);
    }

    isSorted = true;
}