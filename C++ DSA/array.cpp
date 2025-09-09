#include <iostream>
using namespace std;

int main()
{
    int size, i;
    cout << "Enter the size of array: ";
    cin >> size;
    int marks[size];
    cout << "Elements of array of the size " << size << " : " << endl;

    for (i = 0; i < size; i++)
    {
        cin >> marks[i];
    }
    cout << "Array are: " << endl;
    for (i = 0; i < size; i++)
    {
        cout << marks[i] << " " << endl;
    }

    int min = marks[0], index = 0;

    for (i = 1; i < size; i++)
    {

        if (marks[i] < min)
        {
            min = marks[i];
            index = i;
        }
    }
    cout << "minimum " << min << " at index " << index << endl;

    return 0;
}