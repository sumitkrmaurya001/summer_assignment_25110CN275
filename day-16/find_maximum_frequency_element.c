// Simple program to find element with maximum frequency (easy version)

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	if (printf("Enter number of elements: ") < 0) return 0;
	if (scanf("%d", &n) != 1 || n <= 0) {
		printf("Invalid size\n");
		return 1;
	}
	int *a = malloc(sizeof(int) * n);
	if (!a) return 1;
	printf("Enter %d integers:\n", n);
	for (int i = 0; i < n; ++i) scanf("%d", &a[i]);

	int maxElem = a[0];
	int maxFreq = 1;

	// Simple O(n^2) approach without sorting
	for (int i = 0; i < n; ++i) {
		int cnt = 1;
		for (int j = i + 1; j < n; ++j) {
			if (a[j] == a[i]) cnt++;
		}
		if (cnt > maxFreq) {
			maxFreq = cnt;
			maxElem = a[i];
		}
	}

	printf("Element with maximum frequency: %d\nFrequency: %d\n", maxElem, maxFreq);

	free(a);
	return 0;
}

