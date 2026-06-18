class Solution {
public:
    bool isPalindrome(int x) {

        // Negative numbers are not palindromes
        if (x < 0) {
            return false;
        }

        int original = x;
        int rev = 0;

        while (x != 0) {
            int digit = x % 10;

            // Overflow check
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10) {
                return false;
            }

            rev = rev * 10 + digit;
            x /= 10;
        }

        return original == rev;
    }
};