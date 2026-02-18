//problem desccription
/*
Write a C++ program that takes an integer input from the user and reverses the digits of the number.
 For example, if the user inputs 1234, the program should output 4321.
  The program should handle both positive and negative integers.   
*/ 

#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;
    if(n < 0) {
        n = -n; // Make n positive for reversal
        while (n != 0) {
        rev = rev * 10 + n % 10; // Append the last digit of n to rev
        n /= 10; // Remove the last digit from n
    }
        rev = -rev; // Make rev negative again
    } else {
        while (n != 0) {
        rev = rev * 10 + n % 10; // Append the last digit of n to rev
        n /= 10; // Remove the last digit from n
    }
    
   
    }
     return rev;
}


int main() {
    int n, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    rev = reverseNumber(n);

    cout << "Reversed number: " << rev << "\n";
    return 0;
}


