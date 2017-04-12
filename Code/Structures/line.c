#include <stdio.h>

struct point_t {
	int x, y;
};

struct line_t {
	struct point_t start;
	struct point_t end;
};

struct rectangle_t {
	struct line_t left, right, up, down;
}

int main() {

	struct line_t line;
	struct rectngle_t rect;

	printf("%d", line.start.x);
	scanf("%d", &rect.left.start.x);	
	
	return 0;
}

int are_parallel(l1, l2) {
 return 1;
}


int are_not_parallel(l1, l2) {
	return !are_parallel(l1, l2);
}










