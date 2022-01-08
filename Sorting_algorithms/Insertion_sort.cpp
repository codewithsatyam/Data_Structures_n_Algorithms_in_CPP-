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

/******************
output:
*************INSERTION_SORT*************
How many elements do you want to create with...(max50):
7
Enter the elements of array:
9 4 3 2 34 1 6 
Array after pass-1-is : 4 9 3 2 34 1 6 
Array after pass-2-is : 3 4 9 2 34 1 6
Array after pass-3-is : 2 3 4 9 34 1 6
Array after pass-4-is : 2 3 4 9 34 1 6
Array after pass-5-is : 1 2 3 4 9 34 6
Array after pass-6-is : 1 2 3 4 6 9 34
The sorted array is given below:
1 2 3 4 6 9 34
*******************/

