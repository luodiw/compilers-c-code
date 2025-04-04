#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"

LinkedList *createList()
{
    LinkedList *theList = malloc(sizeof(LinkedList));
    theList -> firstNode = NULL;
    return theList;
}

void insertAtHead(LinkedList *theList, char *toAdd)
{
    Node *newNode = malloc(sizeof(Node));
    newNode -> data = toAdd;
    newNode -> next = theList -> firstNode;
    theList -> firstNode = newNode;
}

int getSize(LinkedList *theList)
{
    int count = 0;
    Node * curr = theList -> firstNode;
    while (curr != NULL) {
        curr = curr -> next;
        count ++;
    }
    return count;
}

void getAllData(LinkedList *theList) {
    Node *curr = theList -> firstNode;
    char accumulate[1000] = "";
    while (curr != NULL) {
        strcat(accumulate, curr -> data);
        curr = curr -> next;
    }
    printf("%s\n", accumulate);
}


