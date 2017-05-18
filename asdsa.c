#include <stdio.h>

int main(){
//defining a stack
struct stack_t{
	int *data;
	int top;
	int capacity;
};
	
struct stack_t stack_init(int capacity){
	sruct stack_t st;
	st.capacity = capacity;
	st.top = 0;
	st.data = malloc(sizeof(int)*capacity);
}

void stack_destroy(struct stack_t* st){
	free(st -> data);
}

int main(){
	struct stack_t st = stack_init(5);
	st -> data = NULL;
	st -> capacity = 0;
	st -> top = -1;
}
