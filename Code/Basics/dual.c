#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int len = (n + 1) / 2;
	int sum_arr[len];

	for (int i = 0; i < len ;i++) {
		sum_arr[i] = arr[i] + arr[n - i - 1];
	}

	for (int i = 0; i < len; i++) {
		printf("%d\n", sum_arr[i]);
	}
	return 0;
}
