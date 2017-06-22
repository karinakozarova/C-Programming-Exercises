#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct channel_t {
	int id;
	char show[40];
};

struct tv_t {
	struct channel_t *channels;
	int channel_count;
};

struct tv_t sort_by_id(struct tv_t);
void update_or_create(struct tv_t*, int, char[40]);

int main() {
	return 0;
}

void update_or_create(struct tv_t *tv, int id, char show[40]) {
	int found = 0;
	for (int i = 0; i < tv->channel_count; i++) {
		if (tv->channels[i].id == id) {
			strcpy(tv->channels[i].show, show);
			found = 1;
		}	
	}

	if (!found) {
		struct channel_t *channel = malloc(sizeof(struct channel_t));

		channel->id = id;
		strcpy(channel->show, show);

		// Realloc if needed

		tv->channels[tv->channel_count++] = *channel;
	}
}
