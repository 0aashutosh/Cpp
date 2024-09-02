#include <iostream> 
using namespace std;

// Function template to sort an array of any type
template <typename T>
void sortArray(T arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
	{
        for (int j = 0; j < n - 1 - i; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                // Swap the elements
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
template <typename T>
void printArray(T arr[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int arrInt[] = {5, 2, 9, 1, 5, 6};
    int nInt = sizeof(arrInt) / sizeof(arrInt[0]);//number of array(total size of array divide by single size of array) 
    float arrFloat[] = {4.2, 2.1, 9.5, 1.8, 3.6};
    int nFloat = sizeof(arrFloat) / sizeof(arrFloat[0]);
    cout<< "Integer array before sorting the array: ";
    printArray(arrInt, nInt);
    cout << "Integer array after sorting: ";
    sortArray(arrInt, nInt);
    printArray(arrInt, nInt);
    cout << "Float array before sorting: ";
    printArray(arrFloat, nFloat);
    cout << "Float array after sorting: ";
    sortArray(arrFloat, nFloat);
    printArray(arrFloat, nFloat);
    return 0;
}

