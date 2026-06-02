#include <stdio.h>

int main() {
    /*A palindrome number is an integer that remains exactly the 
    same when its digits are reversed. For example, numbers like 121, 1331 are palindromes*/
    int n, reversed = 0, remainder, original;

    
    printf("Enter an integer: ");
    scanf("%d", &n);

   
    original = n;

   
    while (n != 0) {
        remainder = n % 10;                  // Step 1: Extract the last digit
        reversed = reversed * 10 + remainder; // Step 2: Append it to the reversed variable
        n /= 10;                             // Step 3: Remove the last digit from n
    }

    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
