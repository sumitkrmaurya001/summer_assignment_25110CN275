#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0, base = 1, remainder;

    printf("Enter a binary number (using 0s and 1s): ");
    scanf("%lld", &binary);

    long long original_binary = binary; 
    while (binary > 0) {
        remainder = binary % 10;         
        decimal = decimal + remainder * base; 
        binary = binary / 10;            
        base = base * 2;                
    }
   
    printf("The binary number %lld in decimal is: %d\n", original_binary, decimal);

    return 0;
}
