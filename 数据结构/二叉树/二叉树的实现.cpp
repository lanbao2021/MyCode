typedef struct BiTNode
{
    ElemType data;
    struct BiTNode *lchild, *rchild;
    struct BiTNode *parent;
} BiTNode, *BiTree;