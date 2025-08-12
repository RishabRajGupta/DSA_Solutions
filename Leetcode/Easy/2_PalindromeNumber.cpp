// 9. Palindrome Number

// Topics : Math
// Given an integer x, return true if x is a palindrome, and false otherwise.

// Example 1:
//   Input: x = 121
//   Output: true
//   Explanation: 121 reads as 121 from left to right and from right to left.

// Example 2:
//   Input: x = -121
//   Output: false
//   Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

// Example 3:
//   Input: x = 10
//   Output: false
//   Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 
// Constraints:
//   -231 <= x <= 231 - 1

// Follow up: Could you solve it without converting the integer to a string?

class Solution {
public:
    int reverse(int a){      // function to reverse a number
        long long num = 0;
        while(a >= 1){
            num = (num * 10) + (a % 10);
            a = a/10;
        }
        return num;
    }
    bool isPalindrome(int x) {
        if(x < pow(-2,31) || x > pow(2,31)+1) return false;    // check constraints
        long long y = reverse(x);
        long long z = x;
        if(z < pow(-2,31) || z > pow(2,31)+1) return false;    // check constraints
        return z == y;
    }
};

// Time Complexity : O(1);
// Space Complexity : O(1);
