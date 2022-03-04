typedef struct LNode
{
    ElemType data;
    Struct LNode *next;
} LNode, *LinkLis t; // Lnode强调这是一个结点，LinkList强调这是一个链表
                     // 上述的定义等价于下面这个
                     // typedef struct LNode LNode
                     // typedef stuct LNode * LinkList