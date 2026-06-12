#include <stdio.h>
#include <limits.h>

int find_max(int arr[], int n) {
    if (n <= 0) return INT_MIN;
    int mx = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > mx) mx = arr[i];
    }
    return mx;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[n];
    for (int i = 0; i < n; ++i) scanf("%d", &arr[i]);
    int mx = find_max(arr, n);
    printf("%d\n", mx);
    return 0;
}
