#include "main.h"
int main(void){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int arr_size = sizeof(arr)/ sizeof(arr[0]);
    printf("%d\n",binarySearch(arr,arr_size ,1));
    return 0;
}