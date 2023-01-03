#ifndef LINKLIST_H
#define LINKLIST_H

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

typedef struct Node node;

node *creat(int *arr, int len);
void printList(node *first);
void freeList(node *first);
node *search(node *first, int item);
void insertNode(node *NODE, int item);
node *deleteNode(node *first, node *NODE);

node *creat(int *arr, int len) {
    node *first = NULL, *current = NULL, *previous = NULL;
    for (int i = 0; i < len; i++) {
        current = (node *) malloc(sizeof(node));
        current->data = arr[i];
        current->next = NULL;
        if (i == 0)
            first = current;
        else
            previous->next = current;
        previous = current;
    }
    return first;
}
void printList(node *first) {
    node *current = first;
    if (first == NULL)
        printf("List is empty\n");
    else {
        while (current != NULL) {
            printf("%3d", current->data);
            current = current->next;
        }
        printf("\n");
    }
}
void freeList(node *first) {
    node *current = first;
    node *tmp = NULL;
    while (current != NULL) {
        tmp = current;
        current = current->next;
        free(tmp);
    }
}
node *search(node *first, int item) {
    node *current = first;
    while (current != NULL) {
        if (current->data == item)
            return current;
        current = current->next;
    }
    return NULL;
}
void insertNode(node *NODE, int item) {
    node *newnode = (node *) malloc(sizeof(node));
    newnode->data = item;
    newnode->next = NODE->next;
    NODE->next = newnode;
}
node *deleteNode(node *first, node *NODE) {
    node *ptr = first;
    if (first == NULL) {
        printf("Nothing to delete!\n");
        return NULL;
    }
    if (NODE == first)
        first = first->next;
    else {
        while (ptr->next != NODE)
            ptr = ptr->next;
        ptr->next = NODE->next;
    }
    free(NODE);
    return first;
}

#endif