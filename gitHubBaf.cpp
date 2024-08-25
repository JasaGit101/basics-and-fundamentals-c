#include <iostream>

using namespace std;

void arrayMerge(int array1[], int size1, int array2[], int size2, int arrayMerged[])
{
    for (int i = 0; i < size1; i++)
    {
        arrayMerged[i] = array1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        arrayMerged[size1 + i] = array2[i];
    }
}

//Descending
void bubbleSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    const int MAX_SIZE = 10;
    int array1[MAX_SIZE], array2[MAX_SIZE];
    int arrayMerged[2 * MAX_SIZE];
    int size1, size2;
    
    cout << "Enter the size of elements for the First Array (up to 10): ";
    cin >> size1;
    if (size1 > MAX_SIZE)
    {
        cout << "Size exceeds the limit of 10!" << endl;
        return 1;
    }
    
    cout << "Enter " << size1 << " elements for the First Array: ";
    for (int i = 0; i < size1; i++)
    {
        cin >> array1[i];
    }
    
    cout << "Enter the size of elements for the Second Array (up to 10): ";
    cin >> size2;
    if (size2 > MAX_SIZE)
    {
        cout << "Size exceeds the limit of 10!" << endl;
        return 1;
    }
    
    cout << "Enter " << size2 << " elements for the Second Array: ";
    for (int i = 0; i < size2; i++)
    {
        cin >> array2[i];
    }
    
    arrayMerge (array1, size1, array2, size2, arrayMerged);
    bubbleSort (arrayMerged, size1 + size2);
    
    cout << "Merged array in descending order: ";
    for (int i = 0; i < size1 + size2; i++)
    {
        cout << arrayMerged[i] << " ";
    }
    
    return 0;
}
