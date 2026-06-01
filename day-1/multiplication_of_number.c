#include <stdio.h>

int main() {
    int num, i, tab;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Multiplication Table for %d:\n", num);

    // Loop for repeat the 1 to 10 number to multiply with the user input number
    for(i = 1; i <= 10; i++) {
        tab= num * i;
        printf("%d x %d = %d\n", num, i, tab);
      
    }
    

    return 0;
}
