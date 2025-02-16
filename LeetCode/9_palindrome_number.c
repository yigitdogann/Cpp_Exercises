class Solution {
public:
    bool isPalindrome(int x) {
        int reversed = 0, num = x;

        if (x < 0 || x % 10 == 0 && x != 0)
            return 0;

        while (num > reversed) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }

        return (num == reversed || num == reversed / 10);
    }
};