#include <stdio.h>
struct node_t{
	int data;
	struct node_t *next;
};

struct list_t {
	struct node_t *head;
};

struct list_t init_list(){
	struct list_t result = {NULL};
	return result;
}


int main(){
	struct list_t list = init_list();
	return 0;
}
