#include <stdio.h>
#include "linklist.h"
#define LEN 4

int main() {
    int arr[LEN] = {14, 27, 32, 46};
    node *first = creat(arr, LEN);
    printList(first);
    freeList(first);
    return 0;
}