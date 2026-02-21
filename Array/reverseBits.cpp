// Problem Description: REverse bits of a given 32 bits unsigned integer.
// leetcode: https://leetcode.com/problems/reverse-bits/ (ploblem No. 190)


#include<iostream>
#include <cmath>
using namespace std;


class Solution {
public:
    int reverseBits(int n) {
        int binary[32];
        int i = 0;
        int j = 31;
        long long power = 1;
        int result = 0;

        while (n > 0) {
            binary[i] = n % 2;
            n = n / 2;
            i++;
        }

        while (j > i) {
            swap(binary[j], binary[i]);
            i++;
            j--;
        }

        for (int j  = 31; j >= 0; j--) {
            result += binary[j] * power;
            power *= 2;
        }

        return result;
    }
};

int main() {
    Solution num;
    int n = 2147483644; // Example input
    int reversed = num.reverseBits(n);
    cout << "Reversed bits: " << reversed << endl; // Output should be 964176192
    return 0;
}