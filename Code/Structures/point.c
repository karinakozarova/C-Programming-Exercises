#include <stdio.h>

struct point_t {
	int x;
	int y;
};


int are_on_same_line(struct point_t, struct point_t);
struct point_t sum(struct point_t, struct point_t);

int main() {

	struct point_t example = { 1, 2 };
	struct point_t ex2 = { .y = 1, .x = 3};	
	struct point_t ex3 = { y : 1, x : 2};

	struct point_t p1, p2;

	scanf("%d%d%d%d", &p1.x, &p1.y, &p2.x, &p2.y);

	struct point_t sum_var = sum(p1, p2);

	printf("(%d, %d)", sum(p1, p2).x, sum(p1, p2).y);
	
	sum(sum(p1, p2), sum_var);

	printf("%d", are_on_same_line(p1, p2));

	return 0;
}

int are_on_same_line(struct point_t p1, struct point_t p2) {
	return 1;
}

struct point_t sum(struct point_t p1, struct point_t p2) {
	struct point_t result;
	result.x = p1.x + p2.x;
	result.y = p1.y + p2.y;
	
	return result;
}







