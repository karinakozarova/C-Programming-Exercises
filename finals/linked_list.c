#include <stdio.h>
#include <stdlib.h>

struct list{
	struct node* head; // first element
};

struct node{
	int item;
	struct node* nodes;
};



struct list initialise_list(){
	//null list
	struct list lists = {NULL};
	return lists;
}

struct node* initialise_node(int item){
	struct node* node;
	node->nodes = NULL;
	node->item = item;
	return node;
}

int is_empty(struct list lists){
	if(lists.head == NULL) return 1; //is empty
	return 0;

}
void printing(struct node nodes){
	printf("Item: %d",nodes.item);
}

int main(){
	struct node* node = initialise_node(5);
	return 0;
}
