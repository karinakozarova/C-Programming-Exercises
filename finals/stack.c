#include <stdio.h>
#include <stdlib.h>

struct stack create_void_stack(int size);
int is_empty(struct stack some_stack);
int show_first_item(struct stack some_stack);
int show_last_item(struct stack some_stack);
void push(struct stack *some_stack);
void destroy_stack(struct stack *empty_stack);
void pop(struct stack *some_stack);


struct stack{
	int top;
	int size;
	int* array;
};

int main(){
	// create stack
	struct stack empty_stack;
	empty_stack.top = 0; // the first element is 0
	empty_stack.size = 8;
	push(&empty_stack);
	printf("%d",show_first_item(empty_stack));
	return 0;
}


struct stack create_void_stack(int size){
	struct stack empty_stack;
	empty_stack.top = 0; // the first element is 0
	empty_stack.size = size;
	empty_stack.array = malloc(sizeof(int)*size);
	return empty_stack;
}

void destroy_stack(struct stack *empty_stack){
	free(empty_stack->array);
	empty_stack->array = NULL;
	empty_stack->top = 0;
	empty_stack->size = 0;
}
int is_empty(struct stack some_stack){
	if(some_stack.top == 0){
		return 1; //is empty
	}
	else return 0; // not empty	
}

int show_last_item(struct stack some_stack){
	return *some_stack.array; // stack is empty
}

int show_first_item(struct stack some_stack){
	if(some_stack.top != -1) return *(some_stack.array + some_stack.top-1);
	else return 0;	// stack is empty
}

void push(struct stack *some_stack){
	int element = 5;
	some_stack->array[some_stack->top] = element;
	some_stack->top++;
}

void pop(struct stack *some_stack){
	if(some_stack->top != 0) some_stack->top--;
}
