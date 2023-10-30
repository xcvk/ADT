

typedef struct LinkedList LinkedList;

LinkedList *Create(void);

void Add(LinkedList *obj,void *item, int type,bool dynamic,unsigned long long length);

void Delete(LinkedList *obj,unsigned long long index);

void *Get(LinkedList *obj,unsigned long long index);

unsigned long long length(LinkedList *obj);

void Free(LinkedList *obj);