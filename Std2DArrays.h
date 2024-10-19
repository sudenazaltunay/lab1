#include "Std2DArrays.h"
#include <iostream>
#include <stdexcept>

void fillArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
    if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
        throw std::invalid_argument("Incorrect number of rows or columns");
    }

    int startValue = 1;
    
    for (int col = columns - 1; col >= 0; --col) {
        int i = 0, j = col;
        while (j < columns && i < rows) {
            arr[i][j] = startValue++;
            i++;
            j++;
        }
    }

    for (int row = 1; row < rows; ++row) {
        int i = row, j = 0;
        while (i < rows && j < columns) {
            arr[i][j] = startValue++;
            i++;
            j++;
        }
    }
}