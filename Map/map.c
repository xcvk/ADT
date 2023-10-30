#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "map.h"



typedef struct Node {
    void *value;
    struct Node *next;

    int type;
} Node;



typedef struct Map {
    Node *stack;
    unsigned long long length;
    unsigned long long size;
} Map;

Map *Create(void) {
    Map *obj = malloc(sizeof(Map));
    obj->length = 0;
    obj->size = 1;
    obj->stack = NULL;
    return obj;
}

unsigned long long Hash(void *item, int type) {
    
}

// Compare() is a private method
bool Compare(void *item1, void *item2, int type1,int type2) {
    if (type1 != type2)
    {
        return false;
    }
    


    return true;
}


void Add(Map *obj,void *value, int type) {
    unsigned long long index = Hash(value,type);

    if (!(obj->stack + index))
    {
        obj->length++;
    }
    
    for (Node *traverse = obj->stack + index; ;traverse = traverse->next)
    {
        if (!traverse)
        {
            traverse = malloc(sizeof(Node));
            traverse->next = NULL;
            traverse->value = value;
            traverse->type = type;
            break;
        }
        if (Compare(value,traverse->value,type,traverse->type))
        {
            break;
        }
    }
}