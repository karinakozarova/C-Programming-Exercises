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

struct node_t* init_node(int item){
	struct node_t *result  = malloc(sizeof(struct node_t));
	result -> data = item;
	result -> next = NULL;
	return result;
}

void insert(struct list_t* st, int item){

}
int main(){
	struct list_t list = init_list();
	return 0;
}
