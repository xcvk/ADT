#include <stdio.h>
#include <stdlib.h>




int main(void) {

    MyLinkedList *obj = myLinkedListCreate();
    
    for (int i = 0; i < 10; i++)
    {
        myLinkedListAddAtIndex(obj,i/2, i);
    }
    myLinkedListDeleteAtIndex(obj,0);
    myLinkedListFree(obj);

    return 0;
}