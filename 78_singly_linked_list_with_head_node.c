#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char task[100];
    struct Node* next;
} Node;

void insert_at_head(Node* head, const char* task) {
    if (head == NULL || task == NULL) {
        printf("Error: Invalid parameters\n");
        return;
    }
    
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    
    strcpy(new_node->task, task);
    new_node->next = head->next;
    head->next = new_node;
}

void insert_at_tail(Node* head, const char* task) {
    if (head == NULL || task == NULL) {
        printf("Error: Invalid parameters\n");
        return;
    }
    
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    
    strcpy(new_node->task, task);
    new_node->next = NULL;
    
    Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;
}

void insert_at_position(Node* head, const char* task, unsigned int pos) {
    if (head == NULL || task == NULL) {
        printf("Error: Invalid parameters\n");
        return;
    }

    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    strcpy(new_node->task, task);

    Node* current = head;
    unsigned int count = 0;

    while (current != NULL && count < pos) {
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

void delete_first(Node* head) {
    if (head == NULL || head->next == NULL) {
        printf("fail to target the aim\n");
        return;
    }
    Node* temp = head->next;
    head->next = temp->next;
    free(temp);
}

void delete_last(Node* head) {
    if (head == NULL || head->next == NULL) {
        printf("fail to target the aim\n");
        return;
    }

    Node* current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }
    Node* temp = current->next;
    current->next = NULL;
    free(temp);
}

void delete_note(Node* head, char* target) {
    if (head == NULL || head->next == NULL || target == NULL) {
        printf("fail to target the aim\n");
        return;
    }

    Node* current = head;
    while (current->next != NULL && strcmp(current->next->task, target) != 0) {
        current = current->next;
    }

    if (current->next != NULL) {
        Node *temp = current->next;
        current->next = temp->next; 
        free(temp);
    } else {
        printf("fail to find the target\n");
    }
}

void free_list(Node* head) {
    if (head == NULL) return;
    
    Node* current = head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
}

void traverse_list(Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    Node* current = head->next;
    int index = 1;
    
    while (current != NULL) {
        printf("%d. %s\n", index++, current->task);
        current = current->next;
    }
    printf("---\n");
}

void reverse_list(Node* head) {
    if (head == NULL || head->next == NULL || head->next->next == NULL)
        return; 
    
    Node* current = head->next;
    Node* prev = NULL;
    Node* next = NULL;
    
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head->next = prev; 
}

int main() {
    Node* head = (Node*)malloc(sizeof(Node));
    if (head == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    head->next = NULL;
    
    printf("After inserting at head:\n");
    insert_at_head(head, "learn C language");
    traverse_list(head);
    
    printf("After inserting at tail:\n");
    insert_at_tail(head, "learn Python");
    traverse_list(head);
    
    printf("After inserting at position 1:\n");
    insert_at_position(head, "learn data analysis", 1);
    traverse_list(head);

    printf("After reverse the list:\n");
    reverse_list(head);
    traverse_list(head);

    printf("After deleting first:\n");
    delete_first(head);
    traverse_list(head);

    free_list(head);
    
    return 0;
}
