
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, m;
	if (printf("Enter size of first array: ") && scanf("%d", &n) != 1) return 0;
	int *a = malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i) scanf("%d", &a[i]);

	if (printf("Enter size of second array: ") && scanf("%d", &m) != 1) { free(a); return 0; }
	int *b = malloc(m * sizeof(int));
	for (int i = 0; i < m; ++i) scanf("%d", &b[i]);

	printf("Intersection: ");
	int printed = 0;
	for (int i = 0; i < n; ++i) {
		int found = 0;
		for (int k = 0; k < i; ++k) if (a[k] == a[i]) { found = 1; break; }
		if (found) continue; // skip duplicates from first array
		for (int j = 0; j < m; ++j) {
			if (a[i] == b[j]) {
				if (printed) printf(" ");
				printf("%d", a[i]);
				printed = 1;
				break;
			}
		}
	}
	if (!printed) printf("None");
	printf("\n");

	free(a); free(b);
	return 0;
}
