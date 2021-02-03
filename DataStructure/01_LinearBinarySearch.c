#include <stdio.h>
#include <conio.h>

// LinearSearch applies on both sorted and unsorted Array //
            // Function For Linear Search //
int LinearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

// BinarySearch applies only on sorted Array //
      // Function For Binary Search //
int BinarySearch(int arr[], int size, int element)
{
    int low, mid, high;
     low = 0;
     high = size - 1;
    // Searching Starts .....
    while (low <= high)
    {

        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}
int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int size = sizeof(arr) / sizeof(int);
    int element = 20;
    int Search = BinarySearch(arr, size, element);
    printf("the element %d was found at index %d\n", element, Search);
    return 0;
};
