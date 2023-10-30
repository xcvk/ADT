#include <stdlib.h>



typedef struct circle {

    circle *next;
    int val;


} circle;


int main(void) {
    
    circle *obj = malloc(sizeof(circle) * 10);
    obj->val = 1;
    circle *traverse = obj;
    int temp = 0;
    for (int i = 1; i < 10; ++i)
    {
        temp = 0;
        for (circle *t2 = traverse + i;temp != 4; ++temp)
        {
            t2 = malloc(sizeof(circle));
            t2->val = temp * 10 + i;
        }
    }
    
    return 0;
    
}