#include <iostream>
#include <Windows.h>


// Сортировка пузырьком
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
    std::cout << "Сортировка пузырьком: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

// Сортировка выбором
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minId = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minId])
            {
                minId = j;
            }
        }
        std::swap(arr[i], arr[minId]);
    }
    std::cout << "Сортировка выбором: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}


// Сортировка вставками
void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    std::cout << "Сортировка вставками: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 5;
    int arrBubble[size] = { 5, 2, 4, 3, 1 };
    int arrInsertion[size] = { 4, 1, 2, 5, 3 };
    int arrSelection[size] = { 3, 1, 4, 5, 2 };

    bubbleSort(arrBubble, size);

    selectionSort(arrSelection, size);

    insertionSort(arrInsertion, size);

    return 0;
}


