#include <iostream>
using namespace std;
void bubblesort(int[], int);

////////////////////////////////////////////////////////////////////////////////

int main()
{
    int n, arr[50];
    cout << " Enter the number of elements in the array : " << endl;
    cin >> n;
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bubblesort(arr, n);
    cout << "The array sorted in ascending order is : " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

///////////////////////////////////////////////////////////////////////////////

void bubblesort(int AR[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < (size - 1) - i; j++)
        {
            if (AR[j] > AR[j + 1])
            {
                temp = AR[j];
                AR[j] = AR[j + 1];
                AR[j + 1] = temp;
            }
        }
    }
}

/******************
output:
Enter the number of elements in the array : 
5
Enter the elements: 
9 7 4 6 1 
The array sorted in ascending order is : 
1 4 6 7 9
******************/

