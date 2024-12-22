/* *************************************************
 *  Name: Denver Clark
 *  Assignment: Final Project
 *  Purpose: Main driver file for testing matrix files.
 ************************************************* */

#include "main.h"

int main()
{
    /* ************************
     * Runs a set of tests on functionality of the Matrix class.
     *
     * @param none
     * @exception none
     * @return int : 0 on success
     * ************************/

    try
    {
        /* Enter dimensions of matrix to be tested here */

        int testRows = 20;
        int testColumns = 20;

        /* Run tests below */

        std::cout << "Test 1: Creating a valid matrix of entered size: " << testRows << "x" << testColumns << "\n";
        Matrix mat(testRows, testColumns, 5);
        mat.printMatrix();

        std::cout << "\nTest 2: Setting all elements to 10..." << "\n";
        mat.setMatrix(10);
        mat.printMatrix();

        std::cout << "\nTest 3: Setting an individual element to 20..." << "\n";
        mat.setElement(1, 1, 20);
        std::cout << "\nTest 3.2: Setting an individual element to 75..." << "\n";
        mat.setElement(2, 3, 75);
        std::cout << "\nTest 3.3: Setting an individual element to 3..." << "\n";
        mat.setElement(7, 7, 3);
        std::cout << "\nTest 3.3: Setting an individual element to 1200..." << "\n";
        mat.setElement(9, 12, 1200);
        mat.printMatrix();

        std::cout << "\nTest 4: Printing a specific row (row 1)..." << "\n";
        mat.printRow(1);
        std::cout << "\nTest 4.2: Printing a specific row (row 2)..." << "\n";
        mat.printRow(2);
        std::cout << "\nTest 4.3: Printing a specific row (row 3)..." << "\n";
        mat.printRow(3);
        std::cout << "\nTest 4.4: Printing a specific row (non-existent row)..." << "\n";
        mat.printRow(50);

        std::cout << "\nTest 5: Printing a specific column (column 1)..." << "\n";
        mat.printColumn(1);
        std::cout << "\nTest 5.2: Printing a specific column (column 2)..." << "\n";
        mat.printColumn(2);
        std::cout << "\nTest 5.3: Printing a specific column (column 3)..." << "\n";
        mat.printColumn(3);
        std::cout << "\nTest 5.3: Printing a specific column (non-existent column)..." << "\n";
        mat.printColumn(35);

        std::cout << "\nTest 6: Calculating row sum and average (row 1)..." << "\n";
        std::cout << "Sum: " << mat.rowSum(1) << "\n";
        std::cout << "Average: " << mat.rowAverage(1) << "\n";
        std::cout << "\nTest 6.2: Calculating row sum and average (row 6)..." << "\n";
        std::cout << "Sum: " << mat.rowSum(6) << "\n";
        std::cout << "Average: " << mat.rowAverage(6) << "\n";
        std::cout << "\nTest 6.3: Calculating row sum and average (row 9)..." << "\n";
        std::cout << "Sum: " << mat.rowSum(9) << "\n";
        std::cout << "Average: " << mat.rowAverage(9) << "\n";

        std::cout << "\nTest 7: Finding the minimum and maximum values..." << "\n";
        std::cout << "Min: " << mat.min() << ", Max: " << mat.max() << "\n";

        std::cout << "\nTest 8: Sorting the matrix per row..." << "\n";
        mat.sortMatrix();
        mat.printMatrix();

        std::cout << "\nTest 9: Searching for value 20 (binary search)..." << "\n";
        std::cout << (mat.findValue(20) ? "Found." : "Not found.") << "\n";
        std::cout << "\nTest 9.2: Searching for value 100 (binary search)..." << "\n";
        std::cout << (mat.findValue(100) ? "Found." : "Not found.") << "\n";
        std::cout << "\nTest 9.3: Searching for value 1200 (binary search)..." << "\n";
        std::cout << (mat.findValue(1200) ? "Found." : "Not found.") << "\n";

        std::cout << "\nTest 10: Rotating the sorted matrix..." << "\n";
        mat.rotateMatrix();
        mat.printMatrix();

        std::cout << "\nTest 11: Attempting to create an invalid matrix..." << "\n";
        try
        {
            Matrix invalidMat(1, 1);
        }
        catch (const std::invalid_argument &e)
        {
            std::cout << "Caught exception: " << e.what() << "\n";
        }

        std::cout << "\nTest 12: Testing a few edge cases..." << "\n";
        Matrix edgeCase(2, 2, -5);
        edgeCase.printMatrix();
        edgeCase.setElement(0, 0, 10);
        edgeCase.printMatrix();
        edgeCase.sortMatrix();
        edgeCase.printMatrix();
        std::cout << "Min: " << edgeCase.min() << ", Max: " << edgeCase.max() << "\n";

        std::cout << "\n\033[32mAll tests were completed successfully!\033[0m" << "\n\n";
    }
    catch (const std::exception &e)
    {
        std::cerr << "An exception occurred: " << e.what() << "\n";
    }

    return 0;
}