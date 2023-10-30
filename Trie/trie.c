typedef struct Node Node;

typedef struct {


    Node *up;
    Node *down;

    Node *body;
    unsigned long long max_cap;
    unsigned long long length;
    char val;
} Node;


typedef struct {
    Node *head;
    
} Root;