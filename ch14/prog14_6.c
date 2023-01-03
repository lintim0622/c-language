#include <stdio.h>
#include "linklist.h"
#define LEN 3

int main() {
    int arr[LEN] = {12, 38, 57};
    node *first = creat(arr, LEN);
    printList(first);

    node *NODE = search(first, 38);
    insertNode(NODE, 46);
    printList(first);
    freeList(first);
    return 0;
}