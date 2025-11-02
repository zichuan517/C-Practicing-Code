#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    char task[100];
    struct Node* next;
}Node;

void insert_at_head(Node** head, char* task){
    Node* new_node = (Node*) malloc (sizeof(Node));
    if (new_node == NULL){
        printf("memory allocation failed\n");
        return;
    }

    strncpy(new_node->task, task, sizeof(new_node->task) - 1);
    new_node->task[sizeof(new_node->task) - 1] = '\0';

    new_node->next = *head;
    *head = new_node;
}

void insert_at_tail(Node** head, char* task){
    Node* new_node = (Node*) malloc (sizeof(Node));
    if (new_node == NULL){
        printf("memory allocation failed\n");
        return;
    }
    strncpy(new_node->task, task, sizeof(new_node->task) - 1);
    new_node->task[sizeof(new_node->task) - 1] = '\0';
    new_node->next = NULL;

    if (*head == NULL){
        *head = new_node;
        return;
    }

    Node* current = *head;
    while (current->next != NULL){
        current = current->next;
    }
    current->next = new_node;
}

void insert_at_position(Node** head, const char* task, unsigned int pos) {
    
    if (pos == 0){
        insert_at_head((Node**)head, (char*)task);
        return;
    }

    if (*head == NULL) {
        printf("Error: List is empty, cannot insert at position %u\n", pos);
        return;
    }

    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    strncpy(new_node->task, task, sizeof(new_node->task) - 1);
    new_node->task[sizeof(new_node->task) - 1] = '\0';

    Node* current = *head;
    int count = 0;

    while (current != NULL && count < pos-1) {
        current = current->next;
        count++;
    }

    if (current == NULL) {
        printf("Error: Position %u out of range\n", pos);
        free(new_node);
        return;
    }
    
    new_node->next = current->next;
    current->next = new_node;
}

void delete_first(Node** head){
    if (*head == NULL){
        printf("fail to target the aim\n");
        return;
    }
    Node* temp = *head;
    *head = temp->next;
    free(temp);
}

void delete_last(Node** head){
    if (*head == NULL){
        printf("fail to target the aim\n");
        return;
    }

    if ((*head)->next == NULL){
        free(*head);
        *head = NULL;
        return;
    }

    Node* current = *head;
    while (current->next->next != NULL){
        current = current->next;
    }
    Node* temp = current->next;
    current->next = NULL;
    free(temp);
}

void delete_node(Node** head, char* target){
    if (*head == NULL){
        printf("fail to target the aim\n");
        return;
    }

    if (strcmp((*head)->task, target) == 0){
        delete_first(head);
        return;
    }

    Node* current = *head;
    while (current->next != NULL
        && strcmp(current->next->task, target) != 0){
        current = current->next;
    }

    if (current->next != NULL){
        Node *temp = current->next;
        current->next = temp->next;
        free(temp);
    }
    else {
        printf("fail to find the target\n");
    }
}

void traverse_list(Node* head) {
    Node* current = head;
    int index = 1;

    while (current != NULL) {
        printf("%d. %s\n", index++, current->task);
        current = current->next;
    }
    printf("---\n");
}

void free_list(Node** head) {
    Node* current = *head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
    *head = NULL;
}

int main() {
    Node* head = NULL;

    insert_at_head(&head, "First task");
    insert_at_tail(&head, "Last task");
    insert_at_position(&head, "Middle task", 1);
    
    printf("Current list:\n");
    traverse_list(head);
    free_list(&head);
    
    return 0;
}
