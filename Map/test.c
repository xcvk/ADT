#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ball {
    unsigned long long k;
    int x;
    struct ball *next;
} ball;

int main() {
    // Write C code here
    ball *head = malloc(sizeof(ball));
    head->k = 2;
    head->x = 1;
    head->next = NULL;
    
    char *string = "12312312";
    
    int type = sizeof(head);
    printf("%d %d %d %d",sizeof(40000000),sizeof(ball),sizeof(string),sizeof(head));
    
    
    return 0;
}