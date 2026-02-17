// Problem description
/*
 WAP to find the index of two numbers in a sorted array which add up to a target number:
*/


#include<iostream>
using namespace std;

int main(){


    int arr[] = {1, 2, 4, 8, 10};
    int target= 6;
    int i = 0, j = (sizeof(arr)/sizeof(arr[0])) - 1;

    while(i < j){
        
        if(arr[i]+arr[j] == target){
            cout << i << " " << j;
            break;
        }
        
        else if(arr[i]+arr[j] >target){
            j--;
        }
        else{
            i++;
        }
        
    }

    return 0;
}


/* 
    For this we are using two pointer approach, we initialize two pointer i and j, i is initialized to 0 and j is initialized to the last index of the array.
    We run a while loop until i is less than j, inside the while loop we check if the sum of the values at index i and j is equal to the target, 
    if it is then we print the index of i and j and break the loop.
    If the sum is greater than the target, then we decrement the value of j, else we increment the value of i.
    The time complexity of this approach is O(n) and the space complexity is O(1) 
*/