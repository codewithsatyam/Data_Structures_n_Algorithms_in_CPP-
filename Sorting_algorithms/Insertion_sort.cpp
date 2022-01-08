//Program to sort a sequence using insertion sort
#include <iostream>
using namespace std;
void in_sort(int[], int);

//////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[50], n;
    cout << "*************INSERTION_SORT*************" << endl;
    cout << "How many elements do you want to create with...(max50):" << endl;
    cin >> n;
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    in_sort(arr, n);
    cout << "The sorted array is given below:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////

void in_sort(int AR[], int size)
{
    int key = 0, j = 0;
    for (int i = 1; i < size; i++)
    {
        key = AR[i];
        j = i - 1;
        while (j >= 0 && key < AR[j])
        {
            AR[j + 1] = AR[j];
            j -= 1;
        }
        AR[j + 1] = key;
        cout << "Array after pass-" << i << "-is : ";
        for (int k = 0; k < size; k++)
            cout << AR[k] << " ";
        cout << endl;
    }
}

