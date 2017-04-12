#include <stdio.h>

struct time_t {
	int hour;
	int minutes;
};

int is_lunch_break(struct time_t);

int main() {

	return 0;
}

int is_lunch_break(struct time_t t) {
	if (t.hour == 12 && t.minutes >= 15) {
		return 1;
	}

	if (t.hour == 13) { return 1; }

	if (t.hour == 14 && t.minutes <= 23) {
		return 1;
	}

	return 0;
}
