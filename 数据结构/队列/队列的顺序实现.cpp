#define MaxSize 10
typedef struct
{
    ElemType data[MaxSize];
    int front, rear;
} SqQueue;