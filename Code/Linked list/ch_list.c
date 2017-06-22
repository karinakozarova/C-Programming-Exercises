#include <stdio.h>
#include <stdlib.h>

struct node_t {
    int data;
    struct node_t *next;
};

struct list_t {
    struct node_t *head;
};

struct list_t init_list() {
    struct list_t result = { NULL };
    return result;
}

struct node_t* init_node(int item) {
    struct node_t *result = malloc(
        sizeof(struct node_t));
    result->data = item;
    result->next = NULL;
    return result;
}

void insert(struct list_t* list, int item) {
    struct node_t *new_node = init_node(item);
    new_node->next = list->head;
    list->head = new_node;
}

int remove_list(struct list_t *list) {
    if(list->head == NULL) {
        return -1;
    }
    
    int result = list->head->data;
    struct node_t *tmp = list->head->next;
    free(list->head);
    list->head = tmp;

    return result;
}

void destroy_list(struct list_t *list) {
    while(list->head) {
        remove_list(list);
    }
}

int main() {
    struct list_t list = init_list();
    
    for(int i = 0; i < 3; i++) {
        insert(&list, i+1);
    }
    // for(int i = 0; i < 3; i++) {
    //    printf("%d ", remove_list(&list));
    //}
    //printf("\n");
    destroy_list(&list);
    return 0;
}



