//#include <iostream>
//using namespace std;
//
//void addColumn(int**& array, int& rows, int& cols, int* newColumn, int position) {
//    if (position < 0 || position > cols) return;
//
//    int** newArray = new int* [rows];
//    for (int i = 0; i < rows; ++i) {
//        newArray[i] = new int[cols + 1];
//    }
//
//    for (int i = 0; i < rows; ++i) {
//        int newIndex = 0;
//        for (int j = 0; j < cols + 1; ++j) {
//            if (j == position) {
//                newArray[i][j] = newColumn[i];
//            }
//            else {
//                newArray[i][j] = array[i][newIndex];
//                ++newIndex;
//            }
//        }
//    }
//
//    for (int i = 0; i < rows; ++i) {
//        delete[] array[i];
//    }
//    delete[] array;
//
//    array = newArray;
//    cols += 1;
//}
//
//void printArray(int** array, int rows, int cols) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout << array[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    int rows = 3;
//    int cols = 3;
//
//    int** array = new int* [rows];
//    for (int i = 0; i < rows; ++i) {
//        array[i] = new int[cols];
//        for (int j = 0; j < cols; ++j) {
//            array[i][j] = i * cols + j + 1;
//        }
//    }
//
//    cout << "Початковий масив:" << endl;
//    printArray(array, rows, cols);
//
//    int newColumn[] = { 10, 20, 30 };
//    int position = 1;
//
//    addColumn(array, rows, cols, newColumn, position);
//
//    cout << "Масив після додавання стовпця:" << endl;
//    printArray(array, rows, cols);
//
//    for (int i = 0; i < rows; ++i) {
//        delete[] array[i];
//    }
//    delete[] array;
//
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//#include <iostream>
//using namespace std;
//
//void deleteColumn(int**& array, int& rows, int& cols, int position) {
//    if (position < 0 || position >= cols) return;
//
//    int** newArray = new int* [rows];
//    for (int i = 0; i < rows; ++i) {
//        newArray[i] = new int[cols - 1];
//    }
//
//    for (int i = 0; i < rows; ++i) {
//        int newIndex = 0;
//        for (int j = 0; j < cols; ++j) {
//            if (j != position) {
//                newArray[i][newIndex] = array[i][j];
//                ++newIndex;
//            }
//        }
//    }
//
//    for (int i = 0; i < rows; ++i) {
//        delete[] array[i];
//    }
//    delete[] array;
//
//    array = newArray;
//    cols -= 1;
//}
//
//void printArray(int** array, int rows, int cols) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout << array[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    int rows = 3;
//    int cols = 4;
//
//    int** array = new int* [rows];
//    for (int i = 0; i < rows; ++i) {
//        array[i] = new int[cols];
//        for (int j = 0; j < cols; ++j) {
//            array[i][j] = i * cols + j + 1;
//        }
//    }
//
//    cout << "Початковий масив:" << endl;
//    printArray(array, rows, cols);
//
//    int position = 2;
//    deleteColumn(array, rows, cols, position);
//
//    cout << "Масив після видалення стовпця:" << endl;
//    printArray(array, rows, cols);
//
//    for (int i = 0; i < rows; ++i) {
//        delete[] array[i];
//    }
//    delete[] array;
//
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//#include <iostream>
//using namespace std;
//
//void fillMatrix(int** matrix, int rows, int cols) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            matrix[i][j] = i * cols + j + 1;
//        }
//    }
//}
//
//void printMatrix(int** matrix, int rows, int cols) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//void rotateMatrix(int** matrix, int rows, int cols, int rotations, char direction) {
//    for (int r = 0; r < rotations; ++r) {
//        if (direction == 'r') {
//            int lastElement = matrix[rows - 1][cols - 1];
//            for (int i = rows - 1; i > 0; --i) {
//                for (int j = cols - 1; j > 0; --j) {
//                    matrix[i][j] = matrix[i][j - 1];
//                }
//                matrix[i][0] = matrix[i - 1][cols - 1];
//            }
//            matrix[0][0] = lastElement;
//        }
//        else if (direction == 'l') {
//            int firstElement = matrix[0][0];
//            for (int i = 0; i < rows - 1; ++i) {
//                for (int j = 0; j < cols - 1; ++j) {
//                    matrix[i][j] = matrix[i][j + 1];
//                }
//                matrix[i][cols - 1] = matrix[i + 1][0];
//            }
//            matrix[rows - 1][cols - 1] = firstElement;
//        }
//    }
//}
//
//int main() {
//    int rows = 3;
//    int cols = 4;
//
//    int** matrix = new int* [rows];
//    for (int i = 0; i < rows; ++i) {
//        matrix[i] = new int[cols];
//    }
//
//    fillMatrix(matrix, rows, cols);
//    cout << "Початкова матриця:" << endl;
//    printMatrix(matrix, rows, cols);
//
//    int rotations = 2;
//    char direction = 'r'; // r - вправо, l - вліво
//    rotateMatrix(matrix, rows, cols, rotations, direction);
//
//    cout << "Матриця після циклічного зсуву:" << endl;
//    printMatrix(matrix, rows, cols);
//
//    for (int i = 0; i < rows; ++i) {
//        delete[] matrix[i];
//    }
//    delete[] matrix;
//
//    return 0;
//}