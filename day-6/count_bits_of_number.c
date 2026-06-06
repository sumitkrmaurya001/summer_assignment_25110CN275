#include <stdio.h>

int main() {
    unsigned int num;
    
    unsigned int temp;
    int count = 0;
      printf("Enter a number: ");
    scanf("%u", &num);
 temp = num;
    // Brian Kernighan's Algorithm loop
    while (temp > 0) {
        temp &= (temp - 1); 
        count++;            
    }

    printf("Number of set bits in %u is: %d\n", num, count);
    return 0;
}
