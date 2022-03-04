// ①初始化一个辅助队列
// ②根结点入队
// ③若队列非空，则队头结点出队，访问该结点，并将其左右孩子插入队尾（如果有的话）
// ④重复③直到队列为空
void LevelOrder(BiTree T)
{
    LinkQueue Q;
    InitQueue(Q);
    BiTree p;
    EnQueue(Q, T);
    while (!isEmpty(Q))
    {
        DeQueue(Q, p);
        visit(p);
        if (p->lchild != NULL)
            EnQueue(Q, p->lchild);
        if (p->rchild != NUlL)
            EnQueue(Q, p->rchild);
    }
}