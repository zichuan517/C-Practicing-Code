#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

void insert_at_head(Node* head, int data){
    Node* new_data = (Node*) malloc (sizeof(Node));\
    if (new_data == NULL){
        printf("memory allocation failed\n");
        return;
    }
    new_data->data = data;
    new_data->next = head->next;
    head->next = new_data;
}

void traverse_list(Node* head) {
    Node* current = head->next;
    while (current != NULL) {
        printf("%d->", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void free_list(Node* head) {
    Node* current = head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
}

int main() {
    Node* head = (Node*)malloc(sizeof(Node));
    if (head == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    head->data = 0;
    head->next = NULL;
    insert_at_head(head, 10);
    insert_at_head(head, 20);
    insert_at_head(head, 30);

    traverse_list(head);
    free_list(head);
    
    return 0;
}