void PreOrder(BiTree T)
{
    if (T != NULL)
    {
        PreOrder(T->lchild);
        visit(T); // 当前结点没有左孩子了才访问
        Preorder(T->rchild);
    }
}