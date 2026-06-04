#include <stdio.h>

int main() {
   
    int a = 0; // 1st term
    int b = 1; // 2nd term
    int next, n;
 printf(" enter the nth term number of terms: ");
    scanf("%d", &n);
    
    if (n == 1) {
        printf("The 1st Fibonacci term is: %d\n", a);
    } else if (n == 2) {
        printf("The 2nd Fibonacci term is: %d\n", b);
    } else {
        
        for (int i = 3; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        printf("The %dth Fibonacci term is: %d\n", n, b);
    }

    return 0;
}
