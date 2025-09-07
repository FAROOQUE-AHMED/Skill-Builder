#include <iostream>
using namespace std;

void selectionSort(int arr[], int num)
{
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
//------------------------------------------------------------------------------
void bubbleSort(int arr[], int num)
{
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
//------------------------------------------------------------------------------
void insertionSort(int arr[], int num)
{
    for (int i = 1; i < num; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
//------------------------------------------------------------------------------
int main()
{
    int num;
    cout << "Enter the numbers of element in the array: ";
    cin >> num;
    int arr[num];
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    // selectionSort(arr, num);
    // bubbleSort(arr, num);
    insertionSort(arr, num);

    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
