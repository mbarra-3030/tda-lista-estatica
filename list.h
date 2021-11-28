#include "stdbool.h"

typedef struct List {
    int* array;
    int length;
    int size;
} List;

/**
 * @brief Create a List object
 * 
 * @param size 
 * @return List* 
 */
List* createList(int size);

/**
 * @brief Insert an element with value x at the position p from the List object
 * 
 * @param x 
 * @param p
 * @param list 
 * @return List* 
 */
List* insertElement(int x, int p, List* list);

/**
 * @brief Delete an element at the position p from the List object
 * 
 * @param p 
 * @param list 
 * @return List* 
 */
List* deleteElement(int p, List* list);

/**
 * @brief Update an element at the position p from the List object
 * 
 * @param x 
 * @param p 
 * @param list 
 * @return List* 
 */
List* updateElement(int x, int p, List* list);

/**
 * @brief Frees up memory of the list object
 * 
 * @param list 
 * @return List* 
 */
void freeList(List* list);

/**
 * @brief Get the length of the List object
 * 
 * @param list 
 * @return int 
 */
int getLength(List* list);

/**
 * @brief find an element with value x from the List object
 * 
 * @param x 
 * @param list 
 * @return int 
 */
int findElement(int x, List* list);

/**
 * @brief Get an element from the List object
 * 
 * @param p 
 * @param list 
 * @return int 
 */
int getElement(int p, List* list);

/**
 * @brief Get the first element from the List object
 * 
 * @param list 
 * @return int 
 */
int getFirstElement(List* list);

/**
 * @brief Get the last element from the List object
 * 
 * @param list 
 * @return int 
 */
int getLastElement(List* list);

/**
 * @brief Print the List object
 * 
 * @param list 
 */
void printList(List* list);

/**
 * @brief Check is List object is empty
 * 
 * @param list 
 * @return true 
 * @return false 
 */
bool isEmpty(List* list);

/**
 * @brief Check if List object is full
 * 
 * @param list 
 * @return true 
 * @return false 
 */
bool isFull(List* list);