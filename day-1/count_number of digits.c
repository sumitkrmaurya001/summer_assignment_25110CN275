#include <stdio.h>
int main() {
  long long n;
  int count = 0;
  printf("Enter an integer: ");
  scanf("%lld", &n);
 
  
  do {
    //to find the number of digits in the given number, we can divide the number by 10 until it becomes 0
    n /= 10;
    //increment the count for each division
    ++count;
  } while (n != 0);

  printf("Number of digits: %d", count);
   return 0;
}
