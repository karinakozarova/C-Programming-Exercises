#include <stdio.h>

struct house_t {
	int floors;
	float area;
	int furniture;
};

struct house_t buy_house(struct house_t houses[10]);

int main() {
		

	return 0;
}

struct house_t buy_house(struct house_t houses[10]) {
	for (int i = 0; i < 10; i++) {
		if (houses[i].floors >= 2 && 
		houses[i].furniture && 
		houses[i].area >= 1000.0) {
			return houses[i];
		}
	}
}





