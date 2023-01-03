#include <stdio.h>
#include "linklist.h"
#define LEN 3

int main() {
    int arr[LEN] = {12, 38, 57};
    node *first = creat(arr, LEN);
    printList(first);

    node *NODE = search(first, 38);
    first = deleteNode(first, NODE);
    printList(first);

    first = deleteNode(first, first);
    printList(first);

    first = deleteNode(first, first);
    printList(first);
    freeList(first);
    return 0;
}