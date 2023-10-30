#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// only support non struct types
typedef struct Node {
    struct Node *next;
    struct Node *prev;
    void *value;
    int type;

} Node;

typedef struct LinkedList {
    Node *head;
    Node *tail;

    unsigned long long length;
} LinkedList;


LinkedList *Create(void) {
    LinkedList *obj = malloc(sizeof(LinkedList));
    obj->head = NULL;
    obj->tail = NULL;
    obj->length = 0;
    return obj;
}

void Add(LinkedList *obj,void *item, int type,unsigned long long location) {
    Node *block = malloc(sizeof(Node));
    block->next = NULL;
    block->prev = NULL;
    block->type = type;
    block->value = item;

    if (!obj->head)
    {
        obj->head = block;
        obj->tail = block;
    }
    else
    {
        unsigned long long start = 0;
        for (Node *traverse = obj->head; start <= location; traverse = traverse->next, start++)
        {
            if (start == location || start == location - 1)
            {
                if (traverse && start == location)
                {
                    block->next = traverse;
                    block->prev = traverse->prev;
                    traverse->prev->next = block;
                    traverse->prev = block;
                }
                else
                {
                    if (start == location - 1 && !traverse->next)
                    {
                        traverse->next = block;
                        block->prev = traverse;
                        break;
                    }
                }
            }
        }
    }
}



void Delete(LinkedList *obj,unsigned long long index) {
    Node *temp = obj->head;
    for (unsigned long long i = 0; i <= index; ++i,temp = temp->next)
    {
        if (i == index)
        {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            free(temp);
        }
    }
}

void *Get(LinkedList *obj,const unsigned long long index) {
    if (index > obj->length) return NULL;

    int start = 0;
    
    for (Node *traverse = obj->head; start <= index; ++start, traverse = traverse->next)
    {
        if (index == start)
        {
            return traverse->value;
        }
    }

}

unsigned long long length(LinkedList *obj) {
    return obj->length;
}

void Free(LinkedList *obj) {
    for (Node *traverse = obj->head,*curr = NULL;traverse;traverse = curr) 
    {
        curr = traverse->next;
        free(traverse);
    }
}