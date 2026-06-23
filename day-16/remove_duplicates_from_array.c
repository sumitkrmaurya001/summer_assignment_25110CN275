// Program to remove duplicates from an array while preserving order

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	if (printf("Enter number of elements: ") < 0) return 0;
	if (scanf("%d", &n) != 1 || n <= 0) {
		printf("Invalid size\n");
		return 1;
	}

	int *arr = malloc(n * sizeof(int));
	if (!arr) return 1;

	printf("Enter %d integers:\n", n);
	for (int i = 0; i < n; ++i) scanf("%d", &arr[i]);

	// Remove duplicates while preserving order
	int *out = malloc(n * sizeof(int));
	if (!out) { free(arr); return 1; }
	int out_len = 0;

	for (int i = 0; i < n; ++i) {
		int val = arr[i];
		int seen = 0;
		for (int j = 0; j < out_len; ++j) {
			if (out[j] == val) { seen = 1; break; }
		}
		if (!seen) out[out_len++] = val;
	}

	printf("Array after removing duplicates (%d elements):\n", out_len);
	for (int i = 0; i < out_len; ++i) printf("%d ", out[i]);
	printf("\n");

	free(arr);
	free(out);
	return 0;
}

