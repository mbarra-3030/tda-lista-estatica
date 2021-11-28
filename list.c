#include "list.h"

#include <stdio.h>
#include <stdlib.h>

List* createList(int size) {
    List* list = (List*) malloc(sizeof(List));
    list->array = (int*) malloc(sizeof(int) * size);
    list->length = 0;
    list->size = size;
    return list;
}

List* insertElement(int x, int p, List* list) {
    if (isFull(list)) {
        printf("Couldn't insert into because the list is full.\n");
    } else {
        for (int i = p; i < list->length; i++) {
            list->array[i+1] = list->array[i];
        }
        list->array[p] = x;
        list->length++;
    }
    return list;
}

List* deleteElement(int p, List* list) {
    if (isEmpty(list)) {
        printf("Couldn't delete an element because the list is empty.\n");
    } else {
        for (int i = p; i < list->length - 1; i++) {
            list->array[i] = list->array[i+1];
        }
        list->length--;
    }
    return list;
}

List* updateElement(int x, int p, List* list) {
    if (isEmpty(list)) {
        printf("Couldn't update an element because the list is empty.\n");
    } else {
        if (p > list->length)
            printf("Couldn't update an element because the p position is out of range.\n");
        else
            list->array[p] = x;
    }
    return list;
}

void freeList(List* list) {
    free(list->array);
    free(list);
}

int getLength(List* list) {
    return list->length;
}

int findElement(int x, List* list) {
    if (isEmpty(list)) {
        printf("couldn't find position because the list is empty.\n");
        return -1;
    } else {
        for (int i = 0; i < list->length; i++) {
            if (list->array[i] == x) return i;
        }
        printf("position not found.\n");
        return -1;
    }
}

int getElement(int p, List* list) {
    if (isEmpty(list)) {
        printf("couldn't find element because the list is empty.\n");
        return -1;
    } else {
        if (p > list->length) {
            printf("Couldn't get an element because the p position is out of range.\n");
            return -1;
        } else {
            return list->array[p];
        }
        printf("element not found.\n");
        return -1;
    }
}

int getFirstElement(List* list) {
    if (isEmpty(list)) {
        printf("couldn't get first element because the list is empty.\n");
        return -1;
    } else {
        return list->array[0];
    }
}

int getLastElement(List* list) {
    if (isEmpty(list)) {
        printf("couldn't get last element because the list is empty.\n");
        return -1;
    } else {
        return list->array[list->length-1];
    }
}

void printList(List* list) {
    if (isEmpty(list)) {
        printf("Couldn't print the list because it is empty.\n");
    } else {
        for (int i = 0; i < list->length; i++) {
            printf("%d\n", list->array[i]);
        }
    }
}

bool isEmpty(List* list) {
    if (list->length == 0 || list == NULL) return true;
    return false;
}

bool isFull(List* list) {
    for (int i = 0; i < list->size; i++) {
        if (list->array[i] == 0) return false;
    }
    return true;
}