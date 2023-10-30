#include <string.h>
#include <stdlib.h>



typedef struct Node {
    long long value;
    Node *left;
    Node *right;
    
} Node;


typedef struct Tree {

    Node *head;
    unsigned long long length;
} Tree;

Tree *Create(void) {
    Tree *obj = malloc(sizeof(Tree));
    obj->head = NULL;
    obj->length = 0;
    return obj;
}

void Search(Tree *obj, long long val) {

}

void Add(Tree *obj, long long val) {
    Node *insert = malloc(sizeof(Node));
    insert->left = NULL;
    insert->right = NULL;
    insert->value = val;
    if (!obj->head)
    {
        obj->head = insert;
        
    }



    obj->length++;

}