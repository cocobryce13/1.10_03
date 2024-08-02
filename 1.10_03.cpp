#include <iostream>
#include <windows.h>

int** create_two_dim_array(int rows, int cols)
{
    int** array = new int* [rows];

    for (int i = 0; i < rows; ++i)
    {
        array[i] = new int[cols];
    }
    return array;
}

void fill_two_dim_array(int** array, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            array[i][j] = i+1 * j+1;
        }
    }
}

void print_two_dim_array(int** array, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void delete_two_dim_array(int** array, int rows)
{
    for (int i = 0; i < rows; ++i)
    {
        delete[] array[i];
    }
    delete array;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int rows;
    int cols;
    std::cout << "Введите колличество строк: ";
    std::cin >> rows;
    std::cout << "Введите колличество столбцов: ";
    std::cin >> cols;

    std::cout << "Таблица умножения" << std::endl;
    int** array = create_two_dim_array(rows, cols);
    fill_two_dim_array(array, rows, cols);
    print_two_dim_array(array, rows, cols);
    delete_two_dim_array(array, rows);

    std::cout << "\n\n\n";


    return 0;
}