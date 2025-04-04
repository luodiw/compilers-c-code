#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node Node;

struct Node
{
    char *data;
    Node *next;
}; 

typedef struct LinkedList
{
    Node *firstNode;
} LinkedList;

LinkedList *createList();
void insertAtHead(LinkedList *theList, char *toAdd);
int getSize(LinkedList *theList);
void getAllData(LinkedList *theList);
    
#endif
