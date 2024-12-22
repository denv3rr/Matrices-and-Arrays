# Final - 2D Integer Arrays

<br>
<br>

[COMMENT]: <LOGO*****************************************>
<div align="center">
  <a href="https://seperet.com">
    <img src=https://github.com/denv3rr/denv3rr/blob/main/Seperet_NightVision_Slam.gif/>
  </a>
</div>
  
![Website](https://img.shields.io/website?url=https%3A%2F%2Fseperet.com)
  
</div>

<br>
<br>

<a href="https://seperet.com">
<img src="https://user-images.githubusercontent.com/74038190/212284100-561aa473-3905-4a80-b561-0d28506553ee.gif">
</a>

<br>
<br>

*************

**NOTE:**

**Clicking the red divider lines links will redirect you to https://seperet.com .**

*************

This project is coursework and is shared publicly for visibility and review (see license below).

This project demonstrates the creation and sorting of 2-dimensional integer matrixes (integer arrays) and their sorting/manipulations using a variety of test cases.

## License
This work is licensed under a [Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License](https://creativecommons.org/licenses/by-nc-nd/4.0/).  
You may view this repository but may not use, modify, or distribute it without explicit permission from the author.

<br>
<br>

<a href="https://seperet.com">
<img src="https://user-images.githubusercontent.com/74038190/212284100-561aa473-3905-4a80-b561-0d28506553ee.gif">
</a>

### Compiling and Usage:
- Compile this project at root by using: `````g++ -I ./ *.cpp`````
- Usage:
  - Create a matrix:
    - ```Matrix mat(3, 3, 0);``` (example of a 3x3 matrix initialized with a 0 integer values)
    
  - Print the matrix:
    - ```mat.printMatrix();```
    
  - Set a specific value:
    - ```mat.setElement(1, 1, 10);``` (sets integer value 10 at position (1, 1))
    
  - Rotate the matrix:
    - ```mat.rotateMatrix();```
      
  - Search entire matrix for a specific value:
    - ```bool found = mat.findValue(10);```

- Testing:
  - All functionality of matrix.cpp is tested within the driver file and within ```main()```.

<br>
<br>

<a href="https://seperet.com">
<img src="https://user-images.githubusercontent.com/74038190/212284100-561aa473-3905-4a80-b561-0d28506553ee.gif">
</a>

### More Info:

- Reference repo:
  <a href="https://github.com/alexander-katrompas/pointers-dynamic-allocation-demo">
  Pointers Dynamic Allocation Demo
  </a>

- Big-O Notation Analysis of Matrix Operations
    
    1. Memory Allocation and Deallocation:      
        - Managing memory with ``std::vector``:
          - O(rows × columns): Memory allocation and deallocation are handled by std::vector, which ensures safer and more efficient management of the 2D array.
          <br>

    2. Printing Methods:    
        - printMatrix, printRow, printColumn:
          - O(rows × columns) for printMatrix.
          - O(columns) for printRow.
          - O(rows) for printColumn.
          <br>

    3. Row Sum and Average:
        - rowSum and rowAverage:
          - O(columns) for each operation.
          <br>
          
    4. Sorting:
        - sortMatrix:
          - O(rows × columns log(columns)): Sorting each row individually.
          <br>
          
    5. Finding Minimum/Maximum:
        - min and max:
          - O(rows × columns): Iterates through all elements.
          <br>
          
    6. Matrix Rotation:  
        - rotateMatrix:
          - O(rows × columns): Allocates a new matrix and performs a transpose.
          <br>
          
    7. Searching:  
        - findValue:
          - Binary Search (sorted): O(rows × log(columns)).
          - Linear Search (unsorted): O(rows × columns).
          <br>

    8. Element Updates: 
        - setElement: O(1): Directly accesses and updates an element.
        - setMatrix: O(rows × columns): Updates all elements.
        <br>

<br>
<br>

<a href="https://seperet.com">
<img src="https://user-images.githubusercontent.com/74038190/212284100-561aa473-3905-4a80-b561-0d28506553ee.gif">
</a>

### Notes:

- Pointers of pointers of integers

  #
  
  ### TheAlgorithms
  
  <br>
  
    - Binary search reference used (forked repo):
      - <a href="https://github.com/denv3rr/C-Plus-Plus/blob/master/search/binary_search.cpp">
        https://github.com/denv3rr/C-Plus-Plus/blob/master/search/binary_search.cpp
        </a>
    - Linear search reference used (forked repo):
      - <a href="https://github.com/denv3rr/C-Plus-Plus/blob/master/search/linear_search.cpp">
        https://github.com/denv3rr/C-Plus-Plus/blob/master/search/linear_search.cpp
        </a>

<br>
<br>

<a href="https://seperet.com">
<img src="https://user-images.githubusercontent.com/74038190/212284100-561aa473-3905-4a80-b561-0d28506553ee.gif">
</a>

### Example Output:

```
> .\a.exe
Test 1: Creating a valid matrix of entered size: 20x20
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5

Test 2: Setting all elements to 10...
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10

Test 3: Setting an individual element to 20...

Test 3.2: Setting an individual element to 75...

Test 3.3: Setting an individual element to 3...

Test 3.3: Setting an individual element to 1200...
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 20 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 75 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 3 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 1200 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10

Test 4: Printing a specific row (row 1)...
10 20 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10

Test 4.2: Printing a specific row (row 2)...
10 10 10 75 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10

Test 4.3: Printing a specific row (row 3)...
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10

Test 4.4: Printing a specific row (non-existent row)...
Error: Row index 50 is out of range. Valid range for your specified dimensions are 0 to 19.
Continuing tests...

Test 5: Printing a specific column (column 1)...
10
20
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10

Test 5.2: Printing a specific column (column 2)...
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10

Test 5.3: Printing a specific column (column 3)...
10
10
75
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10
10

Test 5.3: Printing a specific column (non-existent column)...
Error: Column index 35 is out of range. Valid range for your specified dimensions are 0 to 19.
Continuing tests...

Test 6: Calculating row sum and average (row 1)...
Sum: 210
Average: 10.5

Test 6.2: Calculating row sum and average (row 6)...
Sum: 200
Average: 10

Test 6.3: Calculating row sum and average (row 9)...
Sum: 1390
Average: 69.5

Test 7: Finding the minimum and maximum values...
Min: 3, Max: 1200

Test 8: Sorting the matrix per row...
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 20
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 75
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
3 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 1200
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10

Test 9: Searching for value 20 (binary search)...
Found.

Test 9.2: Searching for value 100 (binary search)...
Not found.

Test 9.3: Searching for value 1200 (binary search)...
Found.

Test 10: Rotating the sorted matrix...
10 10 10 10 10 10 10 3 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10
10 20 75 10 10 10 10 10 10 1200 10 10 10 10 10 10 10 10 10 10

Test 11: Attempting to create an invalid matrix...
Caught exception: Matrix dimensions must be at least 2x2.

Test 12: Testing a few edge cases...
-5 -5
-5 -5
10 -5
-5 -5
-5 10
-5 -5
Min: -5, Max: 10

All tests were completed successfully!

```

<br>
<br>

<a href="https://seperet.com">
<img src="https://user-images.githubusercontent.com/74038190/212284100-561aa473-3905-4a80-b561-0d28506553ee.gif">
</a>

<br>
<br>

[COMMENT]: <LOGO*****************************************>
<div align="center">
  <a href="https://seperet.com">
    <img src=https://github.com/denv3rr/denv3rr/blob/main/Seperet_NightVision_Slam.gif/>
  </a>
</div>
  
![Website](https://img.shields.io/website?url=https%3A%2F%2Fseperet.com)
  
</div>

<br>
<br>

<a href="https://seperet.com">
<img src="https://user-images.githubusercontent.com/74038190/212284100-561aa473-3905-4a80-b561-0d28506553ee.gif">
</a>