#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node_t {
	int value;
	struct node_t *next;
};

struct list_t {
	struct node_t *head;
};

struct note_t {
	char message[20];
};

struct board_t {
	struct note_t notes[10];
	int notes_on_board;
};

struct calendar_t {
        int events_count[52];
};

int* events_per_month(struct calendar_t);
struct board_t copy_board(struct board_t);
void filter_board_notes(struct board_t*);
int count(struct list_t);
struct node_t* create(int);
struct node_t* get_nth(struct list_t, int);
void swap(struct list_t*, int, int);
void reverse(struct list_t*);

int main() {

	struct list_t l;
	l.head = create(1);
	l.head->next = create(2);
	l.head->next->next = create(3);
	l.head->next->next->next = create(4);

	printf("%d\n", count(l));

	printf("%d\n", get_nth(l, 0)->value);
	printf("%d\n", get_nth(l, 1)->value);
	printf("%d\n", get_nth(l, 2)->value);
	printf("%d\n", get_nth(l, 3)->value);

	swap(&l, 0, 3);

	printf("\n%d\n", get_nth(l, 0)->value);
        printf("%d\n", get_nth(l, 1)->value);
        printf("%d\n", get_nth(l, 2)->value);
        printf("%d\n", get_nth(l, 3)->value);

	/*reverse(&l);
	printf("\n%d\n", get_nth(l, 0)->value);
        printf("%d\n", get_nth(l, 1)->value);
        printf("%d\n", get_nth(l, 2)->value);
        printf("%d\n", get_nth(l, 3)->value);*/

        return 0;
}

void reverse(struct list_t *list) {
	for(int i = 0; i < count(*list) / 2; i++) {
		swap(list, i, count(*list) - 1 - i);
	}
}

void swap(struct list_t *list, int index1, int index2) {
	struct node_t *elem1 = get_nth(*list, index1);
	struct node_t *elem2 = get_nth(*list, index2);

	struct node_t *prev_elem1 = list->head;

	while(prev_elem1->next != elem1) {
		prev_elem1 = prev_elem1->next;
	}

	if(prev_elem1 == list->head) {
		prev_elem1 = NULL;
	}

	struct node_t *prev_elem2 = list->head;
	
	while(prev_elem2->next != elem2) {
		prev_elem2 = prev_elem2->next;
	}

	if(prev_elem2 == list->head) {
                prev_elem2 = NULL;
        }

	if (elem1 == NULL || elem2 == NULL) {
		return;
	}

	if(prev_elem1 != NULL) {
		prev_elem1->next = elem2;
	}
	else {
		list->head = elem2;
	}

	if(prev_elem2 != NULL) {
		prev_elem2->next = elem1;
	}
	else {
		list->head = elem1;
	}

	struct node_t *tmp = elem2->next;
	elem2->next = elem1->next;
	elem1->next = tmp;

	/*struct node_t *prev_elem1 = NULL;
	struct node_t *current_elem1 = list->head;
	while(current_elem1 && current_elem1->value != index1) {
		prev_elem1 = current_elem1;
		current_elem1 = current_elem1->next;
	}
	struct node_t *prev_elem2 = NULL;
        struct node_t *current_elem2 = list->head;
	while(current_elem2 && current_elem2->value != index2) {
                prev_elem2 = current_elem2;
                current_elem2 = current_elem2->next;
        }
	if (current_elem1 == NULL || current_elem2 == NULL) return;
 
	if (prev_elem1 != NULL) {
		prev_elem1->next = current_elem2;
	}
	else {
		list->head = current_elem2;
	}
	if (prev_elem2 != NULL) {
		prev_elem2->next = current_elem1;
	}
	else {
		list->head = current_elem1;
	}
 
	struct node_t *temp = current_elem2->next;
	current_elem2->next = current_elem1->next;
	current_elem1->next = temp;*/
}

struct node_t* get_nth(struct list_t list, int index) {
	int elements_count = -1;

	struct node_t *current_elem = list.head;

	while(current_elem != NULL) {
		elements_count++;

		if(elements_count == index) {
			return current_elem;
		}

		current_elem = current_elem->next;
	}
	
	return NULL;
}

struct node_t* create(int value) {
	struct node_t *new_node = malloc(sizeof(struct node_t));
	new_node->value = value;
	new_node->next = NULL;

	return new_node;
}

int count(struct list_t list) {
	struct node_t *current_element = list.head;
	
	int elements = 0;

	while(current_element != NULL) {
		elements++;
		current_element = current_element->next;
	}

	return elements;
}

void filter_board_notes(struct board_t *b) {
	for(int i = 0; i < b->notes_on_board; i++) {
		if(strlen(b->notes[i].message) < 5 || strlen(b->notes[i].message) > 15) {
			for(int k = i; i < b->notes_on_board - 1; k++) {
				b->notes[k] = b->notes[k + 1];
			}

			b->notes_on_board--;
			i--;
		}
	}
}

struct board_t copy_board(struct board_t reference) {
	struct board_t copy;

	copy.notes_on_board = reference.notes_on_board;

	for(int i = 0; i < reference.notes_on_board; i++) {
		struct note_t new_note;
		strcpy(new_note.message, reference.notes[i].message);
		copy.notes[i] = new_note;
	}

	return copy;
}

int* events_per_month(struct calendar_t calendar) {
	int per_month[13] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	for(int i = 0; i < 52; i++) {
		per_month[i / 4] += calendar.events_count[i];
		printf("\n%d", per_month[i / 4]);
	}

	//return per_month;
	return 0;
}
