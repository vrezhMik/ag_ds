#include "./../main.h"

bool isEdgeCase(int arr[],int arr_size){
    if (arr_size <= 0)
        return true;
    if (arr == NULL)
        return true;
    return false;
}

int binarySearch(int arr[], int arr_size, int niddle)
{
    if (isEdgeCase(arr, arr_size))
        return -1;

    int low = 0;
    int high = arr_size - 1;
    
    while (low <= high)
    {
        int mid = low+ (high - low) / 2;
        int guess = arr[mid];

        if (guess == niddle)
            return mid;
        if(guess > niddle)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}