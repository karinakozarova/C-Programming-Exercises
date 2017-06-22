#include <stdio.h>
#include <stdlib.h>

struct stack_t {
    int *data;
    int top;
    int capacity;
};

struct stack_t stack_init(int);
void stack_destroy(struct stack_t*);
void push(struct stack_t*, int);
int size(struct stack_t);
int top(struct stack_t);
void pop(struct stack_t*);

int main() {
    struct stack_t st = stack_init(5);

    printf("stack size %d: %d\n", size(st), top(st));
    push(&st, 59);
    printf("stack size %d: %d\n", size(st), top(st));

    stack_destroy(&st);
}

void pop(struct stack_t *st) {
    if(size(*st) != 0) {
        st->top--;
    }
}

int top(struct stack_t st) {
    if(size(st) > 0) {
        return st.data[st.top - 1];
    }
    return -1;
}

int size(struct stack_t st) {
    return st.top;
}

void push(struct stack_t* st, int element) {
    st->data[st->top++] = element;
}

void stack_destroy(struct stack_t *st) {
    free(st->data);
    st->data = NULL;
    st->capacity = 0;
    st->top = -1;
}

struct stack_t stack_init(int capacity) {
    struct stack_t st;

    st.capacity = capacity;
    st.top = 0;
    st.data = malloc(sizeof(int) * capacity);

    return st;
}
