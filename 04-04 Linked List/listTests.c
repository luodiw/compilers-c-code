#include <stdio.h>
#include "linkedlist.h"


int main()
{
    LinkedList *myList = createList();
    char *name = "Aaron";

    printf("The list has %d elements.\n", getSize(myList));
    
    insertAtHead(myList, name);

    printf("The list now has %d elements.\n", getSize(myList));

    getAllData(myList);

    printf("The current values of the linked list are\n");
}
