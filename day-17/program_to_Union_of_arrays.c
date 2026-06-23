
#include <stdio.h>
#include <stdlib.h>

int contains(int arr[], int n, int val) {
	for (int i = 0; i < n; ++i)
		if (arr[i] == val) return 1;
	return 0;
}

int main(void) {
	int n1, n2;
	if (printf("Enter size of first array: "), fflush(stdout), scanf("%d", &n1) != 1) return 0;
	int *a = malloc(n1 * sizeof(int));
	for (int i = 0; i < n1; ++i) scanf("%d", &a[i]);

	if (printf("Enter size of second array: "), fflush(stdout), scanf("%d", &n2) != 1) { free(a); return 0; }
	int *b = malloc(n2 * sizeof(int));
	for (int i = 0; i < n2; ++i) scanf("%d", &b[i]);

	int *u = malloc((n1 + n2) * sizeof(int));
	int un = 0;
	for (int i = 0; i < n1; ++i) {
		if (!contains(u, un, a[i])) u[un++] = a[i];
	}
	for (int i = 0; i < n2; ++i) {
		if (!contains(u, un, b[i])) u[un++] = b[i];
	}

	printf("Union of arrays (%d elements):\n", un);
	for (int i = 0; i < un; ++i) printf("%d ", u[i]);
	printf("\n");

	free(a); free(b); free(u);
	return 0;
}
