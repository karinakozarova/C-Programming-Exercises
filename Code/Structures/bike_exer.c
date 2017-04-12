#include <stdio.h>

#define BIKE_SIZE_S 0 
#define BIKE_SIZE_M 1 
#define BIKE_SIZE_L 2 

#define BIKESHOP_SIZE 42

struct bike_t {
	float tires_size;
	int gears;
	char manufacturer[51];
	char model[16];
	int size;
	float cost;
};

struct bikeshop_t {
	struct bike_t bikes[BIKESHOP_SIZE];
	int count;
};

struct bikeshop_t init_empty_bikeshop() {
	struct bikeshop_t bikeshop = {
		.count = 0
	};
	return bikeshop;
}

void print_bike(struct bike_t bike) {
	printf("%s %s (%.1f, %d) - %.2f\n", bike.manufacturer, bike.model, bike.tires_size, bike.size, bike.cost);
}

struct bikeshop_t add_bike(struct bike_t, struct bikeshop_t);

int main() {
	struct bike_t stefan_bike = {
		.tires_size = 26,
		.gears = 8,
		.manufacturer = "Giant",
		.model = "Reign X0",
		.size = BIKE_SIZE_S,
		.cost = 799.89
	};
	struct bikeshop_t dragzone = init_empty_bikeshop();
	printf("bikes in bikeshop: %d\n", dragzone.count);
	
	dragzone = add_bike(stefan_bike, dragzone);

	printf("bikes in bikeshop: %d\n", dragzone.count);


	print_bike(stefan_bike);

	return 0;
}

struct bikeshop_t add_bike(struct bike_t bike, struct bikeshop_t bikeshop) {
	// struct bikeshop_t result;

	if(bikeshop.count < BIKESHOP_SIZE) {
		bikeshop.bikes[bikeshop.count++] = bike;
	}

	return bikeshop;
}


