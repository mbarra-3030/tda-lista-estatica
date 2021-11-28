#include "list.h"

#include <stdio.h>

int main() {
    // Example code
    List* list = createList(5);
    
    insertElement(10, 0, list);
    insertElement(20, 1, list);
    insertElement(30, 2, list);
    insertElement(40, 3, list);
    insertElement(50, 4, list);

    int firstElement = getFirstElement(list);
    int lastElement = getLastElement(list);
    
    printf("firstElement: %d\n", firstElement);
    printf("lastElement: %d\n", lastElement);
    
    return 0;
}