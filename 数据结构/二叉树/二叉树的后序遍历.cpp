void PreOrder(BiTree T)
{
    if (T != NULL)
    {
        PreOrder(T->lchild);
        Preorder(T->rchild);
        visit(T); // 当前结点没有左孩子和右孩子了才visit
    }
}