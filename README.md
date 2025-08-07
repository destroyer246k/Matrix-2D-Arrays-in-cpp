# Matrix (2D Arrays) and it's Operations in C++

**Aim:** To study and implement operations on 2D arrays (matrices) in C++.  

**Tools:** GNU g++ compiler (for local execution), any code editor or an Online C++ Compiler.

## Theory

A two-dimensional array (matrix) in C++ is an array of arrays used to represent data in a tabular format. But, stored in continuous memory location It enables row-column-based access to elements and is commonly used for performing mathematical operations like addition, multiplication, and transpose.

### Key Features:
- Declared as `data_type array_name[rows][columns]`.
- Each element is accessed using `array[i][j]`.
- Suitable for storing grid-like data (e.g., matrices, images).



## Program Explanations

### 1. 2D Array Input and Display

This program demonstrates how to take input in a matrix and display it in matrix form.
Using nested for loops

**Loops Used:**
- Two nested loops are used: one for row traversal and another for column-wise input/output.
- Total: 4 nested loops (2 for input, 2 for output).


### 2. Matrix Sum

This program adds two matrices of the same dimensions by summing their corresponding elements and stores in other matrix if dimensons are not same then it will prompt user .

**Loops Used:**
- Two nested loops for each matrix input.
- Two nested loops for performing sum and displaying it.
- Total: 6 nested loops (2 input M1, 2 input M2, 2 for sum and output).

**Algorithm:**
1. Start.  
2. Input dimensions of both matrices.  
3. Check if dimensions match.  
4. Read elements of both matrices using loops.  
5. Loop through each position to add corresponding elements.  
6. Store the sum in a third matrix.  
7. Display the result matrix.  
8. Stop.



### 3. Matrix Multiplication

This program multiplies two matrices where columns of matrix 1 match rows of matrix 2 and store it in other matrix if dimensions doesn’t match so it will prompt user.

**Loops Used:**
- Two nested loops for each matrix input.
- Three nested loops for performing matrix multiplication.
- Total: 7 nested loops (4 input, 3 for multiplication).

**Algorithm:**
1. Start.  
2. Input dimensions of both matrices.  
3. Check if column count of matrix 1 equals row count of matrix 2.  
4. Read values into both matrices.  
5. Initialize result matrix with zeros.  
6. Loop: for each row of matrix 1  
   - Loop: for each column of matrix 2  
     - Loop: perform dot product using the common dimension.  
7. Store result and display final matrix.  
8. Stop.



### 4. Diagonal Sum of Matrix

This program calculates the sum of diagonal elements in a square matrix (same number of rows and columns) if matrix dimensions are not same  then it will prompt user about it.

**Loops Used:**
- Two nested loops for input.
- One loop with condition `i == j` to extract diagonal elements.
- Total: 3 nested loops.


### 5. Transpose of Matrix

This program creates the transpose of a matrix by swapping its rows with columns.

**Loops Used:**
- Two nested loops for input.
- Two nested loops to swap elements `[i][j]` with `[j][i]`.
- Total: 4 nested loops.

**Algorithm:**
1. Start.  
2. Input number of rows and columns.  
3. Read elements of the matrix.  
4. For each element in matrix, assign `transpose[j][i] = original[i][j]`.  
5. Display the transposed matrix.  
6. Stop.



### 6. Comparing Two Matrices

This program checks if two matrices are exactly equal in both size and element values.

**Loops Used:**
- Two nested loops to take input of both matrices.
- Two nested loops to compare each corresponding element.
- Total: 4 nested loops.

**Algorithm:**
1. Start.  
2. Input dimensions of both matrices.  
3. If dimensions are unequal, report not equal.  
4. Input elements of both matrices.  
5. Loop through all positions in both matrices:  
   - If any mismatch is found, mark as not equal and exit loop.  
6. Print result accordingly.  
7. Stop.



## Conclusion

We implemented key operations on 2D arrays including input/output, sum, multiplication, diagonal sum, transpose, and comparison. Each task required nested loops to traverse and process matrix elements:

- **Input/Output, Sum, Diagonal, Transpose, Compare**: Used two nested loops.  
- **Multiplication**: Required three nested loops for matrix dot product.

Understanding these loop structures and logic is fundamental to building efficient matrix-based applications in C++.

