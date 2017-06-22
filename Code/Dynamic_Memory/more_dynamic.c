#include <stdio.h>
#include <stdlib.h>

struct dynamic_array_t {
	int *arr;
	int size;
};

struct dynamic_array_t generate(int);
void free_dynamic_arr(struct dynamic_array_t*);
struct dynamic_array_t filter_even(struct dynamic_array_t);
struct dynamic_array_t map_sqr(struct dynamic_array_t);

int main() {
	
	struct dynamic_array_t dynamic = generate(5);

	for (int i = 0; i < dynamic.size; i++) {
		printf("%d\n", dynamic.arr[i]);
	}
	

	struct dynamic_array_t even = filter_even(dynamic);

	for (int i = 0; i < even.size; i++) {
		printf("%d\n", even.arr[i]);
	}

	struct dynamic_array_t sqrs = map_sqr(even);

	for (int i = 0; i < sqrs.size; i++) {
		printf("%d\n", sqrs.arr[i]);
	}

	free_dynamic_arr(&sqrs);
	free_dynamic_arr(&even);
	free_dynamic_arr(&dynamic);
	
	return 0;
}

struct dynamic_array_t map_sqr(struct dynamic_array_t dyn) {
	struct dynamic_array_t result = generate(dyn.size);

	for (int i = 0; i < dyn.size; i++) {
		result.arr[i] = dyn.arr[i] * dyn.arr[i];
	}

	return result;
}

struct dynamic_array_t filter_even(struct dynamic_array_t dyn) {
	struct dynamic_array_t result = generate(dyn.size);
	result.size = 0;	

	for (int i = 0; i < dyn.size; i++) {
		if (dyn.arr[i] % 2 == 1) {
			result.arr[result.size] = dyn.arr[i];
			result.size++;
		}
	}	

	return result;
}

void free_dynamic_arr(struct dynamic_array_t *dyn) {
	free(dyn->arr);
	
	dyn->arr = NULL;

	dyn->size = 0;	
}

struct dynamic_array_t generate(int num) {
	struct dynamic_array_t dyn_arr;

	dyn_arr.arr = malloc(num * sizeof(int));
	dyn_arr.size = num;

	if (dyn_arr.arr == NULL) {
		// Error allocating
	}
	
	for (int i = 0; i < num; i++) {
		dyn_arr.arr[i] = i + 1;
	}

	return dyn_arr;	
}










