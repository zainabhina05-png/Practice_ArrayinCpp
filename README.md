# C++ Matrix and Fibonacci Programs

This folder contains simple C++ programs that demonstrate basic array operations, matrix handling, and a stack-based Fibonacci implementation.

## Files

- `Fibb_Func.cpp`
  - Computes the nth Fibonacci number using a custom stack class.
  - Reads a positive integer from the user and prints `Fibonacci(n)`.

- `Boundaryarray.cpp`
  - Reads an `m x n` matrix from user input.
  - Prints the matrix and all boundary elements (first row, last row, first column, last column).

- `rowsncolumns.cpp`
  - Reads matrix dimensions for `A (m x n)` and `B (n x p)`.
  - Reads both matrices, multiplies them, and prints `A`, `B`, and the result `C = A x B`.

- `userinputaRRAY.CPP`
  - Reads an `m x n` matrix from user input.
  - Computes and displays the sum of each row and each column.

## Build and Run

Use a C++ compiler such as `g++`.

```bash
g++ Fibb_Func.cpp -o Fibb_Func
./Fibb_Func

g++ Boundaryarray.cpp -o Boundaryarray
./Boundaryarray

g++ rowsncolumns.cpp -o rowsncolumns
./rowsncolumns

g++ userinputaRRAY.CPP -o userinputaRRAY
./userinputaRRAY
```

> On Windows with PowerShell, run the executable name directly, for example:
>
> ```powershell
> .\Fibb_Func.exe
> ```

## Notes

- The matrix programs use fixed-size arrays of up to `10 x 10`.
- Input values should match the specified matrix dimensions.
- `Fibb_Func.cpp` uses a stack-based approach but still works only for moderate values of `n`.
