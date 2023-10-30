#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    void *value;
    int type;

    bool dynamic;
    unsigned long long n_length;
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

void Add(LinkedList *obj,void *item, int type,bool dynamic,unsigned long long length) {
    Node *block = malloc(sizeof(Node));
    block->next = NULL;
    block->prev = NULL;
    block->type = type;
    block->value = item;

    block->dynamic = false;
    block->n_length = 0;
    if (!obj->head)
    {
        obj->head = block;
        obj->tail = block;
    }
    else
    {
        obj->head->prev = block;
        block->next = obj->head;
        obj->head = block;
    }
}



void Delete(LinkedList *obj,unsigned long long index) {
    if (obj->length - 1 <= index)
    {
        if (index > obj->length / 2)
        {
            
        }
    }
}

void *Get(LinkedList *obj,unsigned long long index) {
    if (index > obj->length) return NULL;


    int start;
    if (index > obj->length / 2)
    {
        start = obj->length;
        for (Node *traverse = obj->tail; start != index - 1;traverse = traverse->prev,start--)
        {
            if (index == start)
            {
                int type = get_type(traverse->type);
                if (type == 0)
                {
                    
                }
            }
        }
    }
    else
    {
        start = obj->length;
        for (Node *traverse = obj->head; start != index + 1;traverse = traverse->prev,start++)
        {
            if (index == start)
            {
                if (traverse->type == sizeof(unsigned long long))
                {
                    unsigned long long *p = traverse->value;
                    return p;
                }
                else
                {
                    char *string = traverse->value;
                    return string;
                }
            }
        }
    }

}

unsigned long long length(LinkedList *obj) {
    return obj->length;
}

void Free(LinkedList *obj) {
    for (Node *traverse = obj->head;traverse;traverse = traverse->next) {
        if (traverse->dynamic)
        {
            free()
        }
    }
}