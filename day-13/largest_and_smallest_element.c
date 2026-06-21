
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	if (printf("Enter number of elements: ") < 0) return 1;
	if (scanf("%d", &n) != 1 || n <= 0) {
		fprintf(stderr, "Invalid number of elements\n");
		return 1;
	}

	int *a = malloc(sizeof(int) * n);
	if (!a) {
		fprintf(stderr, "Memory allocation failed\n");
		return 1;
	}

	for (int i = 0; i < n; ++i) {
		if (printf("Enter element %d: ", i + 1) < 0) { free(a); return 1; }
		if (scanf("%d", &a[i]) != 1) {
			fprintf(stderr, "Invalid input\n");
			free(a);
			return 1;
		}
	}

	int largest = a[0];
	int smallest = a[0];
	for (int i = 1; i < n; ++i) {
		if (a[i] > largest) largest = a[i];
		if (a[i] < smallest) smallest = a[i];
	}

	printf("Largest element: %d\n", largest);
	printf("Smallest element: %d\n", smallest);

	free(a);
	return 0;
}
