#include <iostream>
#include "./../../main.h"

#define RESET   "\033[0m"
#define RED     "\033[38;2;255;0;0m"
#define GREEN   "\033[38;2;0;255;0m"

void assertFunction(int actual, int expected, const std::string& testName) {
    if(actual == expected)
        std::cout << GREEN << "[PASS] " << RESET << testName << std::endl;
    else
        std::cout << RED << "[FAIL] " << RESET << testName << " Expected: " << expected << ", Got: " << actual << std::endl;
}

int main(void) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr_len = sizeof(arr) / sizeof(arr[0]);

    assertFunction(binarySearch(arr, arr_len, 1), 0, "Test 1: At the beginning");
    assertFunction(binarySearch(arr, arr_len, 9), 8, "Test 2: At the end");
    assertFunction(binarySearch(arr, arr_len, 5), 4, "Test 3: At the mid");
    assertFunction(binarySearch(arr, arr_len, -11), -1, "Test 4: No value");
    assertFunction(binarySearch(NULL, arr_len, 1), -1, "Test 5: Empty array");
    assertFunction(binarySearch(arr, 0, 1), -1, "Test 6: No length");
    assertFunction(binarySearch(NULL, 0, 1), -1, "Test 7: No length & no array");

    return 0;
}
