#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;  
        }
        else if (arr[mid] < key) {
            left = mid + 1;  
        }
        else {
            right = mid - 1; 
        }
    }
    return -1;  
}

int main() {
    int n, key;
    cout << "Enter the number of elements: \n";
    cin >> n;

    int arr[n];
    cout << "Enter the elements (sorted): \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the key to search: \n";
    cin >> key;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index " << result << "\n";
    else
        cout << "Element not found" << "\n";

    return 0;
}









/*  Today, In our DSA training session, we will be implementing the binary search algorithm in C++.
Binary search is an efficient searching algorithm that works on sorted arrays. 
It repeatedly divides the search interval in half until the desired element is found or the search interval is empty.
The time complexity of binary search is O(log n) in the worst case, where n is the number of elements in the  array. 
This is because with each iteration, the search space is halved, leading to a logarithmic number of comparisons.
The space complexity of binary search is O(1) for the iterative version, as it only requires a constant amount of extra space for the left, right, and mid variables.
However, if we were to implement binary search recursively, the space complexity would be O(log n) due to the call stack.
In this implementation, we define a function `binarySearch` that takes a sorted array, its size, and the key to search for. 
The function uses two pointers, `left` and `right`, to keep track of the current search interval. It calculates the middle index and compares the middle element with the key. If they match, it returns the index. 
If the middle element is less than the key, it narrows the search to the right half of the array; otherwise, it narrows the search to the left half. 
If the key is not found after exhausting the search interval, it returns -1.
In the `main` function, we take input for the number of elements, the sorted elements themselves, and the key to search for, and then call the `binarySearch` function to get the result.
 Finally, we print whether the element was found and its index or if it was not found.*/   