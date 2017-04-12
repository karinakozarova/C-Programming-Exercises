#include <stdio.h>

struct date_t {
	int year;
	int month;
	int day;
	char separator;
};

void print_date(struct date_t);

int main() {
	
	struct date_t today;

	scanf("%d %d %d %c", &today.year, &today.month, &today.day, &today.separator);	

	print_date(today);

	return 0;
}

void print_date(struct date_t date) {
	printf("%d%c%d%c%d", date.year, date.separator, date.month, date.separator, date.day);
}
