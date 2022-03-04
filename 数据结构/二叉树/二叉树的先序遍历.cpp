void PreOrder(BiTree T)
{
    if (T != NULL)
    {
        visit(T); // 先访问根节点，然后左结点右结点
        PreOrder(T->lchild);
        Preorder(T->rchild);
    }
}