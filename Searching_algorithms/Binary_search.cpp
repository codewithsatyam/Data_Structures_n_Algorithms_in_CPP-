//Binary search in array.
#include <iostream>
using namespace std;

int binary_search(int[], int, int);  //binary_search(the array,its size, search_item)

/////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int arr[50], n, index, ITEM;
    cout << "Enter array size(max 50):" << endl;
    cin >> n;
    cout << "Enter the elements of array (must be in ascending order):" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the item to be searched for:" << endl;
    cin >> ITEM;
    index = binary_search(arr, n, ITEM);
    if (index == -1)
        cout << "Sorry the given element not found!!" << endl;
    else
        cout << "Element found at the index " << index << " and position " << index + 1 << "." << endl;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

int binary_search(int arr[], int SIZE, int target)   //function to perform binary search
{
    int beg = 0, last = SIZE - 1;
    while (beg <= last)
    {
        int mid = (beg + last) / 2;
        if (arr[mid] == target)
            return mid;
        else if (target > arr[mid])
            beg = mid + 1;
        else
            last = mid - 1;
    }
    return -1;     //The control will reach here when the item is not found
}


/*****************
output:
Enter array size(max 50):
3
Enter the elements of array (must be in ascending order):
1 2 3 
Enter the item to be searched for:
2 
Element found at the index 1 and position 2.

******************/
