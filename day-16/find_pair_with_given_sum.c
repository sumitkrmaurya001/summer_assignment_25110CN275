
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
	int x = *(const int*)a;
	int y = *(const int*)b;
	return (x > y) - (x < y);
}

int main(void) {
	int n;
	if (scanf("%d", &n) != 1 || n <= 0) return 0;
	int *a = malloc(sizeof(int) * n);
	for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
	int target;
	if (scanf("%d", &target) != 1) { free(a); return 0; }

	qsort(a, n, sizeof(int), compare);
	int l = 0, r = n - 1;
	int found = 0;
	while (l < r) {
		int s = a[l] + a[r];
		if (s == target) {
			printf("Pair found: %d %d\n", a[l], a[r]);
			found = 1;
			break;
		} else if (s < target) ++l;
		else --r;
	}
	if (!found) printf("No pair with given sum\n");
	free(a);
	return 0;
}
