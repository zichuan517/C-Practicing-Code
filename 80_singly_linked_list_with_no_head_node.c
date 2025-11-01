#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    char task[100];
    struct Node* next;
}Node;

void insert(Node** head, char* task){
    Node* new_node = (Node*) malloc (sizeof(Node));
    if (new_node == NULL){
        printf("memory allocation failed\n");
        return;
    }
    strcpy(new_node->task, task);

    new_node->next = *head;
    *head = new_node;
}
// 因为要真正修改头指针的地址，所以使用二级指针

void insert_at_tail(Node** head, char* task){
    Node* new_node = (Node*) malloc (sizeof(Node));
    if (new_node == NULL){
        printf("memory allocation failed\n");
        return;
    }
    strcpy(new_node->task, task);
    new_node->next = NULL;

    // 关键区别就是下面这行，否则也不用取一个二级指针
    if (*head == NULL){
        *head = new_code;
        return;
    }

    Node* current = *head
    while (current->next != NULL){
        current = current->next;
    }
    current->next = new_node;
}

void insert_at_position(Node** head, const char* task, unsigned int pos) {
    
    if (pos){
        insert_at_head(head, task);
        return;
    }

    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    strcpy(new_node->task, task);

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

void delete_note(Node** head, char* target){
    if (*head == NULL){
        printf("fail to target the aim\n");
        return;
    }

    if (strcmp((*head)->task, task) == 0){
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
        current->next == temp->next;
        free(temp);
    }
    else {
        printf("fail to find the target");
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

/*
1.带头节点的单链表适用于插入、删除频繁的情况，因为固定的头节点简化了边界处理，让代码逻辑统一，维护方便
2.不带头节点的单链表在追求内存使用效率，使用于操作相对简单，不用频繁处理边界情况
*/