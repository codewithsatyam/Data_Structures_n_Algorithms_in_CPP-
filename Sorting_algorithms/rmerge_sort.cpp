//Program to sort sequence using Recursive Merge sort.
#include <iostream>
using namespace std;

void merge(int a[], int, int, int);
void merge_sort(int a[], int, int);

///////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    // int n, arr[50];
    // cout << " Enter the number of elements in the array : " << endl;
    // cin >> n;
    // cout << "Enter the elements: " << endl;
    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];

    int arr[] = {39, 9, 81, 45, 90, 27, 72, 18, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    merge_sort(arr, 0, n - 1);
    printf("\n The sorted array is: \n");
    for (int i = 0; i < n; i++)
        printf(" %d", arr[i]);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////

void merge(int A[], int beg, int mid, int end)
{
    int i = beg, j = mid + 1, index = beg, B[end + 1], k;
    while ((i <= mid) && (j <= end))
    {
        if (A[i] < A[j])
        {
            B[index] = A[i];
            i++;
        }
        else
        {
            B[index] = A[j];
            j++;
        }
        index++;
    }
    if (i > mid)
    {
        while (j <= end)
        {
            B[index] = A[j];
            j++;
            index++;
        }
    }
    else
    {
        while (i <= mid)
        {
            B[index] = A[i];
            i++;
            index++;
        }
    }
    for (k = beg; k < index; k++)
        A[k] = B[k];
}

//////////////////////////////////////////////////////////////////////////////////////////////

void merge_sort(int arr[], int beg, int end)
{
    int mid;
    if (beg < end)
    {

        mid = (beg + end) / 2;
        merge_sort(arr, beg, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, beg, mid, end);
    }
}


/******************
output:

The sorted array is:
 1 9 18 27 39 45 72 81 90
 
 ******************/
